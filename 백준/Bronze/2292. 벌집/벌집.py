N = int(input())
n = 0

while (1):
    end = 3*n*n - 3*n +1
    if N <= end:
        break
    n += 1

if n == 0:
    n=1
    
print(n)