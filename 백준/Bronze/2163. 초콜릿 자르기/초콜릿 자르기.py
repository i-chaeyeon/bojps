n, m = map(int, input().split())

result = 0

result += n-1
result += (result+1) * (m-1)

print(result)