#
# CCC 2026 Junior - Concert Tickets
#
#

B = int(input())
T = int(input())
P = int(input())

R = T - P

if B > R:
    print("N")
else:
    print("Y", R - B)
