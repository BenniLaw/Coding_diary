import random
n = int(input())
N = 1000
count = 0
for _ in range(N):
    result = 0
    for _ in range(5):
        x = random.randint(1, 20)
        result += x
    if result == n:
        count += 1
print("{:.2f}". format(count / N))