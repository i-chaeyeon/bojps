while True:
    N,M = map(int,input().split())
    if N==0 and M==0:
        break
    if N>M:
        if N%M == 0:
            print("multiple")
        else:
            print("neither")
    else:
        if M%N == 0:
            print("factor")
        else:
            print("neither")