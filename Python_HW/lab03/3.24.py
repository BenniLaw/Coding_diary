import random
n = int(input())
N = 100000
count = 0

for _ in range(N):
    A = [0, 0, 0, 0, 1, 1]
    B = [0, 0, 0, 1, 1, 1, 1]

    inda = random.sample(range(len(A)), n)
    indb = random.sample(range(len(B)), n)

    samplea = [A[i] for i in inda]
    sampleb = [B[i] for i in indb]

    newA = [A[i] for i in range(len(A)) if i not in inda] + sampleb

    if newA.count(0) == 4:
        count += 1
print("{:.2f}".format(count / N))