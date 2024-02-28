N,M = map(int, input().split())
cards = list(map(int,input().split()))

target = M
sub = M
result = 0

for i in range (N-2):
    for j in range (i+1,N-1):
        for k in range (j+1,N):
            num = cards[i] + cards[j] + cards[k]
            if num <= target:
                newsub = target - num
                if newsub < sub:
                    sub = newsub
                    result = num

print(result)