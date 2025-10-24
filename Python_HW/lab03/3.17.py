x = int(input())
w = int(input())
n = int(input())
total = 0
for i in range(n):
    if w != 6 and w != 7:
        total += x
        w += 1
    elif w == 6:
        w += 1
    elif w == 7:
        w = 1
print(total)