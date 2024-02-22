N=9
maxnum = []

for _ in range (N):
    new = list(map(int, input().split()))
    mnel = []
    mnel.append(max(new))
    mnel.append(new.index(max(new))+1)
    maxnum.append(mnel)

greatest = 0   
for _ in maxnum:
    if _[0] > greatest:
        greatest = _[0]
        mind = _[1]
        nind = maxnum.index(_) +1

if greatest == 0:
    mind = 1
    nind = 1

print(greatest)
print(nind, mind)