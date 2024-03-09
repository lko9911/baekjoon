a,b = map(int,input().split())
a_list = [0]*a

for n in range(a):
    a_list[n] = n+1

for _ in range(b):
    i,j = map(int,input().split())
    temp = a_list[i-1]
    a_list[i-1] = a_list[j-1]
    a_list[j-1] = temp

for n in range(a):
    print(a_list[n],end=' ') 