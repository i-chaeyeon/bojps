curMax = 0

for _ in range (7):
    seminar, num = map(str, input().split())
    
    if int(num) > curMax :
        ans = seminar
        curMax = int(num)
    

print(ans)