check = [1,1,2,2,2,8]

lst = list(map(int, input().split()))
result = []

for i in range (len(check)):
    result.append(check[i]-lst[i])

print(*result)