N = int(input())
lst = list(map(int,input().split()))
cnt = 0

for _ in lst:
    factor = []
    for i in range (1,_+1):
        if _%i == 0:
            factor.append(i)
    if len(factor) == 2:
        cnt += 1

print(cnt)
