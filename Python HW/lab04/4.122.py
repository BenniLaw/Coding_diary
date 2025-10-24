a = input()
n = len(a)
longest = ''

def is_pali(i, j, a):
    while i <= j:
        if a[i] != a[j]:
            return False
        else:
            i += 1
            j -= 1
    return True


for i in range(n):
    for j in range(i, n):
        if is_pali(i, j, a):
            substr = a[i:j+1]
            if len(substr) > len(longest):
                longest = substr
print(longest)




