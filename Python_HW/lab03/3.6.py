from unittest import result

for a in range(100, 1000):
    ones = a % 10
    tens = a // 10 % 10
    hundreds = a // 100 % 10
    if ones ** 3 + tens ** 3 + hundreds ** 3 == a:
        print(a)
