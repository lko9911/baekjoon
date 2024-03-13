T = int(input())
while T>0:
    T -=1
    h, w, n = map(int,input().split())
    f = n%h
    s = n//h+1
    if f == 0:
        f= h
        s = n//h
    print(f*100 + s)
    