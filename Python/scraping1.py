from bs4 import BeautifulSoup
raw_html = open('contrived.html').read()
html = BeautifulSoup(raw_html, 'html.parser')
for p in html.select('p'):
    if p['id'] == 'walrus':
        print(p.text)
