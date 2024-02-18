num = int(input())
var = input().split()
v = int(input())
sum = 0

for i in range(0,num):
  if (int(var[i]) == v):
    sum +=1
  
print(sum)