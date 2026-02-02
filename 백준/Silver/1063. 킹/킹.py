king_pos, stone_pos, N = input().split()
N = int(N)

# 위치 변환
kx, ky = ord(king_pos[0]) - ord('A'), int(king_pos[1]) - 1
sx, sy = ord(stone_pos[0]) - ord('A'), int(stone_pos[1]) - 1

moves = {
    "R":  (1, 0),
    "L":  (-1, 0),
    "B":  (0, -1),
    "T":  (0, 1),
    "RT": (1, 1),
    "LT": (-1, 1),
    "RB": (1, -1),
    "LB": (-1, -1),
}

def in_board(x, y):
    return 0 <= x < 8 and 0 <= y < 8

for _ in range(N):
    cmd = input().strip()
    dx, dy = moves[cmd]

    nkx, nky = kx + dx, ky + dy

    # 킹이 밖으로 나가면 무시
    if not in_board(nkx, nky):
        continue

    # 돌이 있는 경우
    if nkx == sx and nky == sy:
        nsx, nsy = sx + dx, sy + dy
        if not in_board(nsx, nsy):
            continue
        sx, sy = nsx, nsy

    kx, ky = nkx, nky

# 출력
print(chr(kx + ord('A')) + str(ky + 1))
print(chr(sx + ord('A')) + str(sy + 1))
