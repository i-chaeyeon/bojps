voca = list(input())
tot = 0

for _ in voca:
    if _ in "ABC":
        time = 3
    elif _ in "DEF":
        time = 4
    elif _ in "GHI":
        time = 5
    elif _ in "JKL":
        time = 6
    elif _ in "MNO":
        time = 7
    elif _ in "PQRS":
        time = 8
    elif _ in "TUV":
        time = 9
    elif _ in "WXYZ":
        time = 10
    else:
        time = 11
    tot += time
    
print(tot)