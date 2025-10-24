import math

distance = float(input())
wait_time = int(input())

distance = math.ceil(distance)

fare = 10

if distance > 3:
    if distance <= 13:
        fare += (distance - 3) * 2
    else:
        fare += 10 * 2
        fare += (distance - 13) * 3

if wait_time >= 5:
    wait_units = math.ceil(wait_time / 5)
    fare += wait_units * 2

print(round(fare))