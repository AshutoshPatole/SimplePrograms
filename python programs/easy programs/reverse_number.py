n = int(input('enter the number to reverse :'))
reverse = 0
while n > 0:
    rem = 0
    rem = n % 10
    reverse = reverse * 10 + rem
    # print(reverse)
    n = n // 10
print('the reversed number is', reverse)
