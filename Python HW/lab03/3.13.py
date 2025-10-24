def factorial(n):
    if n == 1 or n == 0:
        return 1
    else:
        return n * factorial(n - 1)

num = input()
result = 0
for i in num:
    result += factorial(int(i))
print(result)

if result == int(num):
    print("YES")
else:
    print("NO")



