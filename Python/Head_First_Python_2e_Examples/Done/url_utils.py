
import requests

def gen_from_urls(urls: tuple) -> tuple:
    for resp in (requests.get(url) for url in urls):
        yield len(resp.content), resp.status_code, resp.url
       #	print("len(resp.content) = " + len(resp.content))
       #	print(resp.url)
       #	print("resp.status_code = " + resp.status_code)
       #	print("resp.url = " + resp.url)

print("gen_from_urls function is called:")
urls = ('http://headfirstlabs.com', 'http://oreilly.com', 'http://twitter.com')
my_tuple = gen_from_urls(urls)
for value in my_tuple: 
	print(value)
