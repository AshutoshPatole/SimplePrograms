n = int(input('enter the number'))
count = 0
while n > 0:
    n = n // 10
    count += 1
print('length of digit is',count)
