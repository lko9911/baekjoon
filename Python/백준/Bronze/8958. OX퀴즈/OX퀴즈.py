T = int(input())
while T>0:
    T -=1
    s = input()
    count = 0
    result = 0
    for i in range(len(s)):
        if s[i] == 'O':
            count += 1
            result += count
        else:
            count = 0
    print(result)