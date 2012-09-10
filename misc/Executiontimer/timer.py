import time
import os
import sys
t0 = time.time()
os.system(sys.argv[1])
print time.time()-t0 , "seconds"