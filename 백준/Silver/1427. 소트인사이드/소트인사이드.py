N = input()

nums = []

for i in N:
    nums.append(int(i))

nums.sort(reverse=True)

for i in range (len(nums)):
    print(nums[i], end='')