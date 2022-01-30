import math
T = int(input())
while(T):
	n = int(input())
		while(math.sqrt(1 + 8*n)%1 > 0):
    		n -= 1
  	print(int((-1 + math.sqrt(1 + 8*n))/2))
  	T-=1
