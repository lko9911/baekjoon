N,M = map(int,input().split())
list = []

for n in range(1,N+1):
    list.append(n)

for _ in range(M):
    a,b = map(int,input().split())
    list[a-1:b] = list[a-1:b][::-1]

for n in range(N):
    print(list[n],end=' ')