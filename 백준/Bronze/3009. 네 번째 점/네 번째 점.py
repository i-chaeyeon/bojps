points = []
for _ in range (3):
    new = list(map(int,input().split()))
    points.append(new)

x1 = points[0][0]
y1 = points[0][1]

for i in points:
    if i[0] != x1:
        x2 = i[0]
    if i[1] != y1:
        y2 = i[1]

x1cnt = 0
x2cnt = 0
y1cnt = 0
y2cnt = 0

for i in points:
    if i[0] == x1:
        x1cnt += 1
    else:
        x2cnt += 1
    if i[1] == y1:
        y1cnt += 1
    else:
        y2cnt +=1
    
if x1cnt == 1:
    print(x1, end=" ")
elif x2cnt == 1:
    print(x2, end=" ")
if y1cnt == 1:
    print(y1)
elif y2cnt == 1:
    print(y2)