s, N, K, R1, R2, C1, C2 = map(int, input().split())

start = (N - K) // 2
end = start + K - 1

def is_black(r, c):
    for _ in range(s):
        if start <= r % N <= end and start <= c % N <= end:
            return 1
        r //= N
        c //= N
    return 0

for r in range(R1, R2 + 1):
    row = []
    for c in range(C1, C2 + 1):
        row.append(str(is_black(r, c)))
    print("".join(row))
