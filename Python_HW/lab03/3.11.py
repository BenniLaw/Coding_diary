N = int(input())
found = False
for start in range(1, N):
    result = 0
    result_list = []
    for i in range(start, N):
        result += i
        result_list.append(i)
        if result > N:
            break
        elif result == N:
            found = True
            print(*result_list, sep=" ")
if found == False:
    print("no")


