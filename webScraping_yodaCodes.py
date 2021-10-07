import requests
from bs4 import BeautifulSoup

URL = "https://randomuser.me/api/?results=50&format=xml"
file = requests.get(URL)

soup = BeautifulSoup(file.content, "xml")

for user in soup.find_all("results"):
	print(user.first.text+" "+user.last.text)
	print(user.username.text)
	print(user.age.text)
	print(user.street.text)
	print(user.email.text)
	print()