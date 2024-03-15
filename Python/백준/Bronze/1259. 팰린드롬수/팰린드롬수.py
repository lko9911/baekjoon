while True:
    n = input()
    if n=='0':
        break
        
    check = True
    for i in range(len(n)//2):
        if n[i] != n[len(n)-1-i]:
            check = False
            print("no")
            break
    if check:
        print("yes")