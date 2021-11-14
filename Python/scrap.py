import time
import os
import urllib.request
from urllib.request import urlretrieve
from selenium.webdriver.common.keys import Keys
from selenium import webdriver
from selenium.webdriver.common.by import By

browser = webdriver.Chrome()
browser.get('http://kletecheresults.contineo.in/')

cap=input()

for i in range(1,9):
    if browser.find_element_by_id("usn"):
        u=browser.find_element_by_id("usn")
        c=browser.find_element_by_id("osolCatchaTxt0")
        u.send_keys(f"01fe16bbt00{i}")
        c.send_keys(cap, Keys.ENTER)
        images = browser.find_elements_by_tag_name("img")
        for image in images:
            src = image.get_attribute("src")
            urllib.request.urlretrieve(src,f"{image}.jpg")
        #browser.find_element_by_link_text('Print Provisional Grade Card').click()
        browser.back()
    else:
        browser.back()
