n1 = int(input('enter the starting number : '))
n2 = int(input('enter the ending number : '))
total = 0
for i in range(n1, n2+1):
    total += i
print('the sum of numbers within the given range is',total)
