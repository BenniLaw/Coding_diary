level = input()
total = float(input())

if level == "P":
    if total >= 100:
        total *= 0.9
else:
    if total < 1000:
        total *= 0.8
    else:
        total *= 0.7
print("{:.2f}".format(total))