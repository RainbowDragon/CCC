#
# CCC 2026 Junior - Beams of Light
#
#

N = int(input())
L = int(input())
Q = int(input())

diff = [0] * (N+2)
for _ in range(L):
    P, S = map(int, input().split())
    lb = max(1, P - S)
    rb = min(N, P + S)
    diff[lb] += 1
    diff[rb+1] -= 1

parking = [0] * (N+1)
for i in range(1, N+1):
    parking[i] = parking[i-1] + diff[i]

for _ in range(Q):
    pos = int(input())
    if 1 <= pos <= N and parking[pos] > 0:
        print("Y")
    else:
        print("N")
