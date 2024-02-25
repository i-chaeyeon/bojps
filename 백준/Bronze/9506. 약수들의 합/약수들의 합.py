while True:
    n = int(input())
    if n == -1:
        break
    factor = []

    for _ in range (1,n):
        if n%_ == 0:
            factor.append(_)

    if n == sum(factor):
        print(n,"= ", end="")
        print(*factor, sep=" + ")
    else:
        print(n,"is NOT perfect.")