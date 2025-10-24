encrypt = input()
res = []
for char in encrypt:
    if char >= "a" and char <= "z":
        result = chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
        res.append(result)
    elif char >= "A" and char <= "Z":
        result = chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
        res.append(result)
    else:
        res.append(char)
print("".join(res))