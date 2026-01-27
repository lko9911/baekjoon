import math

min_n, max_n = map(int, input().split())

# 구간 길이
size = max_n - min_n + 1

# 처음엔 모두 제곱ㄴㄴ수라고 가정
is_square_free = [True] * size

# i^2 ≤ max 범위까지만 검사
limit = int(math.sqrt(max_n))

for i in range(2, limit + 1):
    square = i * i

    # min 이상인 square의 첫 배수
    start = ((min_n + square - 1) // square) * square

    for j in range(start, max_n + 1, square):
        is_square_free[j - min_n] = False

# True 개수 세기
print(sum(is_square_free))
