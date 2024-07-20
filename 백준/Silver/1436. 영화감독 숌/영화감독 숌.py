N = int(input())

count = 0
ans = 665

while count < N:
    ans += 1
    if '666' in str(ans):
        count += 1

print(ans)