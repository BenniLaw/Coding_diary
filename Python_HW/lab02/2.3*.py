salary = int(input())

exemption = 3500
taxable = salary - exemption

if taxable <= 0:
    tax = 0
elif taxable < 1500:
    tax = taxable * 0.03
elif taxable < 4500:
    tax = taxable * 0.10
elif taxable < 9000:
    tax = taxable * 0.20
elif taxable < 35000:
    tax = taxable * 0.25
elif taxable < 55000:
    tax = taxable * 0.30
else:
    tax = taxable * 0.35

print(int(tax))