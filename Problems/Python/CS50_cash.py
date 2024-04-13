import math

quaters = 0.25
dimes = 0.10
nickels = 0.05
pennies = 0.01

while True:
    change = float(input("Change: "))
    if change > 0:
        break

output = 0

while change >= quaters: 
        change = change - quaters
        output += 1
        change = round(change, 2)
        
while change >= dimes: 
        change = change % dimes
        output += 1
        change = round(change, 2)

while change >= nickels: 
        change = change % nickels
        output += 1
        change = round(change, 2)

while change >= pennies: 
        change = change % pennies
        output += 1
        change = round(change, 2)

print(output)
