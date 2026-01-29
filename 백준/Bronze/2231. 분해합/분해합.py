N = int(input())

length = len(str(N))
start = max(1, N - 9 * length)

answer = 0
for i in range(start, N):
    digit_sum = sum(map(int, str(i)))
    if i + digit_sum == N:
        answer = i
        break

print(answer)
