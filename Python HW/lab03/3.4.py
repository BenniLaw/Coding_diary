# 题目（Description）：
#
# 计算 1+1/2-1/3+1/4-1/5+1/6-……+1/n。
#
# 提示（Hint）：
#
# 输出保留三位小数.
n = int(input())
result = 1
for i in range(2, n + 1):
    if i % 2 == 0:
        result = result + 1 / i
    else:
        result = result - 1 / i
print("{:.3f}".format(result))