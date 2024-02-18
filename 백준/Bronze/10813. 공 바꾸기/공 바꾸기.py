N, M = map(int, input().split())
lst = []

for i in range (N):
    lst.append(i+1)

for i in range (M):
    a, b = map(int, input().split())
    temp = lst[a-1]
    lst[a-1] = lst[b-1]
    lst[b-1] = temp

print(*lst)