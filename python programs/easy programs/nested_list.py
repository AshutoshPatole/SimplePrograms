""" 

https://www.hackerrank.com/challenges/nested-list/problem

"""

if __name__ == '__main__':
    lis = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        lis.append([name, score])
    lis.sort(key=lambda x: x[1])
    i = 1
    print(lis)
    temp_res = []
    if len(lis) % 2 != 0:
        temp_res.append(lis[1])
    while lis[i][1] == lis[i+1][1] and i < len(lis):
        i += 1
    temp_res.append(lis[i])
    print(temp_res)
    temp_res.sort()

    j = 0
    while j < len(temp_res):
        print(temp_res[j][0])
        j += 1
