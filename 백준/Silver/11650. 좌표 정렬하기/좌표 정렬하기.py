N = int(input())

coordinates = []

for i in range(N):
    [x,y] = map(int, input().split(' '))
    coordinates.append([x,y])

coordinates.sort()

for i in range(N):
    print(coordinates[i][0], coordinates[i][1])