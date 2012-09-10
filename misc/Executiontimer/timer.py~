#time any code using this python script
#make sure that the execution statement you are passing makes sense to your terminal
#t27
import time
import os
import sys
if len(sys.argv[:])<2:
  print "USAGE: python timer.py \"<your execution statement>\" \nQuotes are only necessary of you want to do redirection or something like that"
else:
  t0 = time.time()
  os.system(' '.join(sys.argv[1:]))
  print time.time()-t0 , "seconds"