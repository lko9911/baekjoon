from collections import deque

N, M = map(int, input().split())
targets = list(map(int, input().split()))

dq = deque(range(1, N + 1))
count = 0

for target in targets:
    idx = dq.index(target)
    
    # 왼쪽 vs 오른쪽 중 최소
    if idx <= len(dq) // 2:
        dq.rotate(-idx)
        count += idx
    else:
        dq.rotate(len(dq) - idx)
        count += len(dq) - idx
    
    dq.popleft()  # 1번 연산 (카운트 X)

print(count)
