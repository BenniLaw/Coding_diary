a = int(input())
b = int(input())
c = int(input())

list = []
list.append(a)
list.append(b)
list.append(c)
max = max(list)
min = min(list)
for i in list:
    if i != max and i != min:
        print(i)