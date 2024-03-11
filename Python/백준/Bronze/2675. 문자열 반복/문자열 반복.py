T = int(input())
while T>0:
    T -= 1
    n, Str = input().split()
    n = int(n)
    
    for i in range(len(Str)):
        print(Str[i]*n, end='')
    print()
