people = ["A", "B", "C", "D"]
for killer in people:
    A = (killer != "A")
    B = (killer == "C")
    C = (killer == "D")
    D = (not C)
    true_count = sum([A, B, C, D])
    if true_count == 3:
        print(killer)
