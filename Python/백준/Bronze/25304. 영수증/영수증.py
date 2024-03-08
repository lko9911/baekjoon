price = int(input())
T = int(input())
a = []
b = []
result = 0

for i in range(T):
    c,d = map(int,input().split())
    a.append(c)
    b.append(d)

for i in range(T):
    result += a[i]*b[i]
    
if result == price:
    print('Yes')
else:
    print('No')