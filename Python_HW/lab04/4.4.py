origin = input()
if origin[0] == "S":
    Yuan = int(origin[1:])
    result = f"Y{Yuan * 6:.2f}"
    print(result)
elif origin[0] == "Y":
    Dollar = int(origin[1:])
    result = f"S{Dollar / 6:.2f}"
    print(result)
else:
    print("error!")