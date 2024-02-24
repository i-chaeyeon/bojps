money = [25,10,5,1]
total = []

T = int(input())

for _ in range (T):
    C = int(input())
    change = [0,0,0,0]
    for i in range (4):
        new, C = divmod(C,money[i])
        change[i] = new
    total.append(change)

for _ in total:
    print(*_)