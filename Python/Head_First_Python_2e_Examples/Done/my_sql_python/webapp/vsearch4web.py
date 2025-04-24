#from flask import Flask, render_template, request, escape
from flask import Flask, render_template, request
from vsearch import search4letters

#from DBcm import UseDatabase
import mysql.connector




app = Flask(__name__)

dbconfig = {'host': '127.0.0.1',
                          'user': 'vsearch',
                          'password': 'vsearchpasswd',
                          'database': 'vsearchlogDB', }

# app.config['dbconfig'] = {'host': '127.0.0.1',
#                           'user': 'vsearch',
#                           'password': 'vsearchpasswd',
#                           'database': 'vsearchlogDB', }


def log_request(req: 'flask_request', res: str) -> None:
    """Log details of the web request and the results."""

    # with UseDatabase(app.config['dbconfig']) as cursor:
        # _SQL = """insert into log
        #           (phrase, letters, ip, browser_string, results)
        #           values
        #           (%s, %s, %s, %s, %s)"""
        # cursor.execute(_SQL, (req.form['phrase'],
        #                       req.form['letters'],
        #                       req.remote_addr,
        #                       req.user_agent.browser,
        #                       res, ))

    # dbconfig = {'host': '127.0.0.1',
    #                       'user': 'vsearch',
    #                       'password': 'vsearchpasswd',
    #                       'database': 'vsearchlogDB', }
    conn = mysql.connector.connect(**dbconfig)
    cursor = conn.cursor()
    # _SQL = """insert into log
    #               (phrase, letters, ip, browser_string, results)
    #               values
    #               (%s, %s, %s, %s, %s)"""
    _SQL = """insert into log
                  (phrase, letters, ip, browser_string, results)
                  values
                  (%s, %s, %s, %s, %s)"""
    print(req.user_agent.browser)
    cursor.execute(_SQL, (req.form['phrase'],
                              req.form['letters'],
                              req.remote_addr,
                              'firefox',
                              res, ))
    conn.commit()
    cursor.close()
    conn.close()



@app.route('/search4', methods=['POST'])
def do_search() -> 'html':
    """Extract the posted data; perform the search; return results."""
    phrase = request.form['phrase']
    letters = request.form['letters']
    title = 'Here are your results:'
    results = str(search4letters(phrase, letters))
    log_request(request, results)
    return render_template('results.html',
                           the_title=title,
                           the_phrase=phrase,
                           the_letters=letters,
                           the_results=results,)


@app.route('/')
@app.route('/entry')
def entry_page() -> 'html':
    """Display this webapp's HTML form."""
    return render_template('entry.html',
                           the_title='Welcome to search4letters on the web!')


@app.route('/viewlog')
def view_the_log() -> 'html':
    """Display the contents of the log file as a HTML table."""
    # with UseDatabase(app.config['dbconfig']) as cursor:
    conn = mysql.connector.connect(**dbconfig)
    cursor = conn.cursor()
    _SQL = """select phrase, letters, ip, browser_string, results
                  from log"""
        
    cursor.execute(_SQL)
    contents = cursor.fetchall()
    conn.commit()
    cursor.close()
    conn.close()
    titles = ('Phrase', 'Letters', 'Remote_addr', 'User_agent', 'Results')
    return render_template('viewlog.html',
                           the_title='View Log',
                           the_row_titles=titles,
                           the_data=contents,)


if __name__ == '__main__':
    app.run(debug=True)
