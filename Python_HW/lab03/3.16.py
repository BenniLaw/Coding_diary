a = 1
b = 1
c = 0
print(a, end = ";")
print(b, end = ";")
while True:
    c = a + b
    if c >= 100:
        break
    print(c, end = ";")
    a = b
    b = c