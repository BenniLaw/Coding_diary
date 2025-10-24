id = input()
result = 0
weight = [7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2]
code = ['1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2']
for i in range(len(weight)):
    result += int(id[i]) * weight[i]
result %= 11
if code[result] == id[-1].upper():  # 防止用户输入小写x
    print("YES")
else:
    print("NO")
