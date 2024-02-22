N,M = map(int, input().split())
A = []
B = []

for _ in range (N):
    new = list(map(int,input().split()))
    A.append(new)

for _ in range (N):
    new = list(map(int,input().split()))
    B.append(new)


for n in range (0,N):
    relst = []
    for m in range (0,M):
        relst.append(A[n][m] + B[n][m])
    print(*relst)