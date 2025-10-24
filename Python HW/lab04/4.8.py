a = input()
lower = upper = number = space = others = 0

for i in range(len(a)):
    if a[i] >= 'a' and a[i] <= 'z':
        lower += 1
    elif a[i] >= 'A' and a[i] <= 'Z':
        upper += 1
    elif a[i] >= '0' and a[i] <= '9':
        number += 1
    elif a[i] == ' ':
        space += 1
    else:
        others += 1
print(lower, upper, number, space, others)
