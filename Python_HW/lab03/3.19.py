import random
n = int(input())
N = 100000
count = 0
for _ in range(N):
    result = 0
    for _ in range(3):
        x = random.randint(1, 5)
        result += x
    if result == n:
        count += 1
print("{:.2f}". format(count / N))