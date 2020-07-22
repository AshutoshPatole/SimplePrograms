print('enter 3 numbers: ')
n1 = int(input())
n2 = int(input())
n3 = int(input())


if n1 > n2 and n1 > n3:
    print(n1, 'is greatest number')
elif n2 > n1 and n2 > n3:
    print(n2, 'is greatest number')
else:
    print(n3, 'is greatest number')
    