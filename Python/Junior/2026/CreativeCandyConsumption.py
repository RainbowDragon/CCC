#
# CCC 2026 Junior - Creative Candy Consumption
#
#

N = input()
M = input()

n = 0
m = 0
i = 0
j = 0

while i < len(N) and j < len(M):
    if N[i] == M[j]:
        n += 1
        m += 1
        i += 1
        j += 1
    else:
        pair = N[i] + M[j]
        if pair in ("RG", "GB", "BR"):
            n += 1
            j += 1
        else:
            m += 1
            i += 1

if i < len(N):
    n += len(N) - i

if j < len(M):
    m += len(M) - j

print(n)
print(m)
