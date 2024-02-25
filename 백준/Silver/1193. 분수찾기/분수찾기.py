X = int(input())

n = 1

while True:
    downbound = int(n*(n-1)/2 + 1)
    upbound = int(n*(n+1)/2 + 1)
    if (X >= downbound and X < upbound):
        break
    n += 1

idx = X-downbound

if n%2 ==0 :
    up = idx+1
    down = n-idx
else:
    up = n-idx
    down = idx+1

print(up,"/",down, sep="")