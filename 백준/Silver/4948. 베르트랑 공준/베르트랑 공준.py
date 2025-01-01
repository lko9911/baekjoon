check = [0] * 2 + [1] * 246912

# 소수 검증 : 에라토스테네스의 체체
for i in range(2, 246913):
    if check[i]:
        for j in range(i * 2, 246913, i):
            check[j] = 0

while True:
    x = int(input())
    if x == 0:
        break
    print(sum(check[x+1:x*2+1]))