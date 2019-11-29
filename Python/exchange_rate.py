import requests
from bs4 import BeautifulSoup

r = requests.get('https://rate.bot.com.tw/xrt?Lang=en-US')
if r.status_code == requests.codes.ok:
    soup = BeautifulSoup(r.text, "html.parser")
    tr0 = soup.select('td[data-table="Spot Selling"]')
    print(tr0[0].text)
