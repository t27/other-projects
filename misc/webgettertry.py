
def func_datestr(yr,mt,dy):
  tempstr=str(datetime.date(yr,mt,dy))
  datestr=tempstr[:4]+tempstr[5:7]+tempstr[8:11]
  return datestr
  
import datetime
import os
yi=2012
mi=7
di=20

df=24
mf=7
yf=2012

oneday=datetime.timedelta(1)
datevar=datetime.date(yf,mf,df)
tempstr=str(datevar)
datestr=tempstr[:4]+tempstr[5:7]+tempstr[8:11]

while datestr!=func_datestr(yi,mi,di):
  os.system("wget http://www.smbc-comics.com/comics/"+datestr+".gif")
  datevar=datevar-oneday
  tempstr=str(datevar)
  datestr=tempstr[:4]+tempstr[5:7]+tempstr[8:11]

