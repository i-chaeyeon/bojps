while True:
    lst = list(map(int,input().split()))

    if lst[0]==0 and lst[1]==0 and lst[2]==0:
        break

    if max(lst) >= sum(lst) - max(lst):
        print("Invalid")
        continue

    if len(lst) == len(set(lst)):
        print("Scalene")
        continue

    if len(set(lst)) == 2:
        print("Isosceles")
        continue
    
    if len(set(lst)) == 1:
        print("Equilateral")
        continue