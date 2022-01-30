n = int(input())
x = []
y = []
z = []
while(n):
    a, b, c = map(int, input().split())
    x.append(a)
    y.append(b)
    z.append(c)
    n -= 1
if sum(x) == 0 and sum(y) == 0 and sum(z) == 0:
    print("YES")
else:
    print("NO")
    
