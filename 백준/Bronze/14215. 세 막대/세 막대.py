lst = sorted(map(int,input().split()))

sum = lst[0] + lst[1] + min(lst[2], lst[0]+lst[1]-1)

print(sum)