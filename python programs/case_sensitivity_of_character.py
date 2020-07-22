n = input()
order = ord(n)
if order >= 65 and order <= 90:
    print('Capital letter')
elif order >= 97 and order <= 122:
    print('small letter')
elif order >= 48 and order <= 57:
    print('number')
else:
    print('Symbols')