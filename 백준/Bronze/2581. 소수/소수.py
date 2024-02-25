M = int(input())
N = int(input())
minnum = N
sum = 0

for _ in range (N,M-1,-1):
    factor = []
    for i in range (1,_+1):
        if _%i == 0:
            factor.append(i)
    if len(factor) == 2:
        sum += _
        if minnum > _:
                minnum = _
    
if sum == 0:
     print(-1)
else:
    print(sum)
    print(minnum)