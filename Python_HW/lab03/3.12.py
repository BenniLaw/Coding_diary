import math
prime = []
for i in range(100, 301):
    is_prime = True
    for j in range(2, i):
        if j * j > i:
            break
        elif i % j == 0:
            is_prime = False
            break
    if is_prime:
        prime.append(i)
print(*prime, sep = " ")
