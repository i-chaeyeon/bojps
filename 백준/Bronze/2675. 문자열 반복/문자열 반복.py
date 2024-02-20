tstcse = int(input())
lst = []

for i in range (tstcse):
    R,S = map(str, input().split())
    lst.append([R,S])

for j in lst:
    iter = int(j[0])
    for k in j[1]:
        print(k*iter, end="")
    print(end="\n")