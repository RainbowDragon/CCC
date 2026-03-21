#
# CCC 2026 Junior - Snail Path
#
#

M = int(input())

x = 0
y = 0
visited = {(x, y)}
count = 0

direction = {'N':(0, 1), 'S':(0, -1), 'E':(1, 0), 'W':(-1, 0)}

for _ in range(M):
    line = input()
    dx, dy = direction[line[0]]
    distance = int(line[1:])

    for _ in range(distance):
        x += dx
        y += dy
        if (x, y) in visited:
            count += 1
        else:
            visited.add((x, y))

print(count)
