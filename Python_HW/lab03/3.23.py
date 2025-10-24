import random
n = int(input())
N = 100000
count = 0

for _ in range(N):
    result = 0
    pool = [1, 2, 3, 4, 5]
    for _ in range(3):
        select = random.choice(pool)
        pool.remove(select)
        result += select
    if result == n:
        count += 1
print("{:.2f}". format(count / N))