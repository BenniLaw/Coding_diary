import math
a = float(input())
b = float(input())
c = float(input())
x1 = (- b + math.sqrt(b ** 2 - 4 * a * c)) / (2 * a)
x2 = (- b - math.sqrt(b ** 2 - 4 * a * c)) / (2 * a)
if x1 > x2:
    print("{:.2f},{:.2f}".format(x2, x1))
else:
    print("{:.2f},{:.2f}".format(x1, x2))