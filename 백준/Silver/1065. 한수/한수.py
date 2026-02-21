N = int(input())
count = 0

for i in range(1, N+1):
    if i < 100:  
        count += 1
    else:
        digits = list(map(int, str(i)))
        if digits[1] - digits[0] == digits[2] - digits[1]:
            count += 1

print(count)