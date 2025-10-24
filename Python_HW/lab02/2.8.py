import math

a = int(input())
b = int(input())
c = int(input())

delta = b ** 2 - 4 * a * c
if a == 0:
    print("Data error!")
elif delta < 0:
    print("No solution!")
elif delta == 0:
    print((-b + math.sqrt(delta)) / (2 * a))
else:
    x1 = (-b + math.sqrt(delta)) / (2 * a)
    x2 = (-b - math.sqrt(delta)) / (2 * a)
    print(x1, x2)
