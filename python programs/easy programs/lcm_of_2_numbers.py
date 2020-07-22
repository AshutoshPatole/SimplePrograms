print('enter 2 numbers : ')
n1 = int(input())
n2 = int(input())

lcm = 0
if n1 > n2:
    lcm = n1
else:
    lcm = n2

while(True):
    if lcm % n1 == 0 and lcm % n2 == 0:
        print('lcm is {}'.format(lcm))
        break
    lcm += 1
