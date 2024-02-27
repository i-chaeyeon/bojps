x,y,w,h = map(int,input().split())

lst = [h-y, w-x, y, x]

print(min(lst))