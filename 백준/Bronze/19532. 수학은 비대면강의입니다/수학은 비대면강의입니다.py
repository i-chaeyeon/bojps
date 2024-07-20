a,b,c,d,e,f = map(int, input().split())

for x in range (-1000,1000):
    isDone = 0
    for y in range (-1000,1000):
        if a*x+b*y == c and d*x+e*y == f :
            print(x,y)
            isDone = 1
            break
    if isDone:
        break
    