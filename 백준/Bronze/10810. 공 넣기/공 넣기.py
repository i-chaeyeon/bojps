N, M = map(int, input().split())
lst = []

for i in range (N):
    lst.append(0)

for i in range (M):
    a, b, c = map(int, input().split())
    for idx in range(a,b+1):
        lst[idx-1] = c

print(*lst)
