nums = []
sum = 0

for i in range (5):
    new = int(input())
    nums.append(new)
    sum += new

nums.sort()

print(int(sum/5))
print(nums[2])