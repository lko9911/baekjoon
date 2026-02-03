import sys
input = sys.stdin.readline

N = int(input())
price = [list(map(int, input().strip())) for _ in range(N)]

INF = 10
dp = [[INF] * N for _ in range(1 << N)]

# 시작 상태
dp[1][0] = 0  # 1번 아티스트, 가격 0

for mask in range(1 << N):
    for last in range(N):
        if dp[mask][last] == INF:
            continue

        cur_price = dp[mask][last]

        for nxt in range(N):
            if mask & (1 << nxt):
                continue
            if price[last][nxt] >= cur_price:
                new_mask = mask | (1 << nxt)
                dp[new_mask][nxt] = min(dp[new_mask][nxt],
                                         price[last][nxt])

ans = 0
for mask in range(1 << N):
    for last in range(N):
        if dp[mask][last] != INF:
            ans = max(ans, bin(mask).count('1'))

print(ans)
