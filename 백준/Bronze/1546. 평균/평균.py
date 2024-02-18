N = int(input())
lst = list(map(int,input().split()))
M = max(lst)
sum = 0

for i in range (N):
    lst[i] = lst[i]/M*100
    sum += lst[i]

print(sum/N)