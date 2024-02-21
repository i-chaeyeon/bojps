N = int(input())

blank = N-1
for i in range (N):
    for _ in range (blank):
        print(" ", end="")
    for s in range (2*i+1):
        print("*", end="")
    print()
    blank -=1

blank = 1
while(blank <= N-1):
    for _ in range (blank):
        print(" ", end="")
        iter = 2*(N-blank)-1
    for s in range (iter):
        print("*", end="")
    print()
    blank += 1