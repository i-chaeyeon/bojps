N = int(input())

maxFive = int(N/5)
count = -1
while maxFive*5 <= N and maxFive >= 0:
    remaining = N - maxFive*5
    if remaining%3 == 0:
        count = maxFive + remaining/3
        break
    maxFive -= 1

print(int(count))