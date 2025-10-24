import random

face = int(input())
N = 100000
sum = 0
for _ in range(N):
    result = 0
    while result <= 50:
        n = random.randint(1, face)
        result += n
    sum += result
print("{:.1f}".format(sum / N))
