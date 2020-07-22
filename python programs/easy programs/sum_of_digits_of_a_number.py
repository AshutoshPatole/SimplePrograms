n = int(input('enter the number : '))

total = 0
while n > 0:
    rem = 0
    rem = n % 10
    total += rem
    n = n // 10
print('the sum of digits is', total)