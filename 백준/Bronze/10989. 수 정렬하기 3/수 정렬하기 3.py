import sys

N = int(input())
nums = []

for i in range (10001):
    nums.append(0)

for i in range (N):
    num = int(sys.stdin.readline())
    nums[num] += 1

count = 0
for i in range (10001):
    times = nums[i]
    for _ in range (times):
        print(i)
        count += 1
    if count == N:
        break
    
