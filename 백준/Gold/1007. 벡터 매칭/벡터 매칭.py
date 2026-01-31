import sys
import math
from itertools import combinations

input = sys.stdin.readline

T = int(input())

for _ in range(T):
    N = int(input())
    points = [tuple(map(int, input().split())) for _ in range(N)]

    total_x = sum(x for x, y in points)
    total_y = sum(y for x, y in points)

    ans = float('inf')

    # N/2개 선택
    for comb in combinations(range(N), N // 2):
        sx = sy = 0
        for i in comb:
            sx += points[i][0]
            sy += points[i][1]

        # 벡터 합 = (+그룹) - (-그룹)
        vx = 2 * sx - total_x
        vy = 2 * sy - total_y

        length = math.sqrt(vx * vx + vy * vy)
        ans = min(ans, length)

    print(f"{ans:.12f}")
