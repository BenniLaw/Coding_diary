x = int(input())
if x >= 100 and x < 1000:
    ones = (x % 10) ** 3
    tens = (x // 10 % 10) ** 3
    hundreds = (x // 100 % 10) ** 3
    if (ones + tens + hundreds) == x:
        print("YES")
    else:
        print("NO")
else:
    print("NO")