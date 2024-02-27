N = int(input())
xloca = []
yloca = []

if N == 1:
    print(0)
else:
    for i in range (N):
        x,y = map(int,input().split())
        xloca.append(x)
        yloca.append(y)

    min_point = [min(xloca), min(yloca)]
    max_point = [max(xloca), max(yloca)]

    x = max_point[0] - min_point[0]
    y = max_point[1] - min_point[1]
    print(x*y)