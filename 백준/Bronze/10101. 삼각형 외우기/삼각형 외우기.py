angles = []

for i in range(3):
    new = int(input())
    angles.append(new)

if sum(angles) != 180:
    print("Error")
else:
    if angles.count(60) == 3:
        print("Equilateral")
    elif angles[0] == angles[1] or angles[0] == angles[2] or angles[1] == angles[2]:
        print("Isosceles")
    else:
        print("Scalene")