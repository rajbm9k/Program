import requests

print('server with page "http://127.0.0.1:5000/search4json" needs to be running')

url = 'http://127.0.0.1:5000/search4json'
#url = 'https://httpbin.org/post'

form_data = {'phrase': 'life, the universe, and everything',
             'letters': 'xyz'}

r = requests.post(url, data=form_data)
#r = requests.post(url, data = {'key':'value'})
print(r)

print(r.json())
