a = int(input())
ones = a % 10
tens = a // 10 % 10
hundreds = a // 100 % 10
print(ones ** 3 + tens ** 3 + hundreds ** 3)