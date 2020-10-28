import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
%matplotlib inline
from urllib.request import urlopen
from bs4 import BeautifulSoup
from pathlib import Path
str_path = "E:\C++ DSA\html_doc.txt"
path = Path(str_path)
h=open(path)
strText = h.read()
soup=BeautifulSoup(strText,'html-parser')


## Alternate 
import re

s = 'asdf=5;iwantthis123jasd'
result = re.search('asdf=5;(.*)123jasd', s)
print(result.group(1))
