#will generate the final file required in PEAC
f=open("a.txt","ru")
str1=f.read()
str1=str1.split('\n')

lista=[]
listans=[]
for elem in str1:
	lista.append(elem.split(' '))

for elems in lista:
	if len(elems)>1:
		listans.append(elems[1])
	else:
		listans.append("na")
print listans
print len(listans)
f.close()
g=open("final","w")
for strng in listans:
	g.write(strng+"\n")
g.close()
