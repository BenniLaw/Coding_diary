import math

a = float(input())
b = float(input())
c = float(input())

if a == 0 and b == 0:
    print("Not an equation")

elif a == 0:
    x = -c / b
    print("{:.2f}".format(x))

else:
    delta = b * b - 4 * a * c
    if delta > 0:
        x1 = (-b + math.sqrt(delta)) / (2 * a)
        x2 = (-b - math.sqrt(delta)) / (2 * a)
        if x1 < x2:
            x1, x2 = x2, x1
        print("{:.2f}".format(x1))
        print("{:.2f}".format(x2))
    elif delta == 0:
        x = -b / (2 * a)
        print("{:.2f}".format(x))
        print("{:.2f}".format(x))
    else:
        real = -b / (2 * a)
        imag = math.sqrt(-delta) / (2 * a)
        print("{:.2f}+{:.2f}i".format(real, abs(imag)))
        print("{:.2f}-{:.2f}i".format(real, abs(imag)))