#
# CCC 2026 Junior - Olympic Scores
#
#

scores = [int(input()) for _ in range(5)]

D = int(input())

scores.sort()

result = sum(scores[1:4])
result *= D

print(result)
