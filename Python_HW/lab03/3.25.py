import random
x1 = int(input())
y1 = int(input())
x2 = int(input())
y2 = int(input())
n = int(input())
m = int(input())
N = 100000
count = 0

for _ in range(N):
    A = [0 for _ in range(x1)] + [1 for _ in range(y1)]
    B = [0 for _ in range(x2)] + [1 for _ in range(y2)]

    inda = random.sample(range(len(A)), n)
    indb = random.sample(range(len(B)), n)

    samplea = [A[i] for i in inda]
    sampleb = [B[i] for i in indb]

    newA = [A[i] for i in range(len(A)) if i not in inda] + sampleb

    if newA.count(0) == m:
        count += 1
print("{:.2f}".format(count / N))