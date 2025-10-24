weight = float(input())
height = float(input())
t = weight / (height * height)
if t < 18:
    print("lower weight")
elif t < 25:
    print("normal weight")
elif t < 27:
    print("higher weight")
else:
    print("obesity")