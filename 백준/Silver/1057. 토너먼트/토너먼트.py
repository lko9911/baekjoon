N, a, b = map(int, input().split())

round_num = 1

while a != b:
    a = (a + 1) // 2
    b = (b + 1) // 2
    round_num += 1

print(round_num - 1)
