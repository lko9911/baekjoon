a,b = map(int,input().split())
a_list = list(map(int, input().split()))
for c in a_list:
    if c < b:
        print(c,end=' ')