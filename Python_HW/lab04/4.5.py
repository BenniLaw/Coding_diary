pali = input()
right = 0
left = len(pali) - 1
is_pali = True
while right <= left:
    if pali[left] != pali[right]:
        is_pali = False
        break
    else:
        right += 1
        left -= 1
print(is_pali)