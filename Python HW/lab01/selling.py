price = float(input())
quantity = int(input())
tax_rate = float(input())

print("{:.1f}".format(price * quantity))
print("{:.1f}".format(price * quantity * tax_rate))
print("{:.1f}".format(price * quantity + price * quantity * tax_rate))
