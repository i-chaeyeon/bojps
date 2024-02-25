N,K = map(int, input().split())
factor = []

for _ in range (1,N+1):
    if N%_ == 0:
        factor.append(_)
    
if K > len(factor):
    print(0)
else:
    print(factor[K-1])