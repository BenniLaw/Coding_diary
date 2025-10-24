import random

n = int(input())
total_boys = 0
total_girls = 0
families = 1000000

for _ in range(families):

    if random.random() < 0.5:

        total_boys += 1
    else:

        total_girls += 1

        if random.random() < n / 100.0:
            total_boys += 1
        else:

            if random.random() < 0.5:
                total_boys += 1
            else:
                total_girls += 1

ratio = total_boys / total_girls
print("{ratio:.2f}".format(ratio=ratio))