N,M = map(int, input().split())
lst = [ i for i in range (1,N+1)]

for i in range (M):
    idx1, idx2 = map(int, input().split())
    temp = lst[idx1-1:idx2]
    temp.reverse()
    lst[idx1-1:idx2] = temp

print(*lst)