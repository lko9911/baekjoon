a,b = map(int,input().split())
a_list = [0]*a

for _ in range(b):
    i,j,k = map(int,input().split())
    for n in range(i,j+1):
        a_list[n-1]=k

for n in range(a):
    print(a_list[n],end=' ')        