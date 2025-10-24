# 题目（Description）：
#
# 输入一个正整数，求它的位数以及各位数字之和。
#
# 例如，输入12345，位数=5，各位数字之和=1+2+3+4+5=15。
#
# 输入（Input）:
#
# 一个正整数
#
# 输出（Output）：
#
# 正整数的位数
#
# 各位数字之和
lis = [i for i in input()]   #  技巧: 直接把输入的整数变成列表
result = 0
for i in range(len(lis)):
    result += int(lis[i])
print(len(lis))
print(result)