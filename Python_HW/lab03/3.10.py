import random

random.seed(125)
target = random.randint(0, 100)
count = 0

while True:
    user_input = input("Please input:")
    try:
        guess = int(user_input)
        count += 1
        if guess > target:
            print("Too big!")
        elif guess < target:
            print("Too small!")
        else:
            print("{count} times, you got it!".format(count=count))
            break
    except ValueError:
        print("Please input integer!")