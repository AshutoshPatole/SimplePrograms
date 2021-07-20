"""
https://www.hackerrank.com/challenges/string-validators/problem

"""
if __name__ == '__main__':
    s = input()
    if any(a.isalpha() for a in s):
        print("True")
    else:
        print("False")
    if any(c.isalpha() for c in s):
        print("True")
    else:
        print("False")
    if any(d.isnumeric() for d in s):
        print("True")
    else:
        print("False")
    if any(l.islower() for l in s):
        print("True")
    else:
        print("False")
    if any(u.isupper() for u in s):
        print("True")
    else:
        print("False")
