T = int(input())
while T>0:
    T -= 1
    n,m = map(int,input().split())
    result = 1
    t=1
    
    for i in range(m,m-n,-1):
        result *= i
        result /= t
        t += 1

    print(int(result))