import sys

MAX = 1000000
is_prime = [True] * (MAX + 1)
is_prime[0] = is_prime[1] = False

for i in range(2, int(MAX**0.5) + 1):
    if is_prime[i]:
        for j in range(i * i, MAX + 1, i):
            is_prime[j] = False

input = sys.stdin.read().split()
T = int(input[0])
cases = map(int, input[1:])

results = []
for n in cases:
    count = 0
    for p in range(2, n // 2 + 1):
        if is_prime[p] and is_prime[n - p]:
            count += 1
    results.append(str(count))

print('\n'.join(results))