N,B = map(int, input().split())
bases = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
R = []

while N != 0:
    N,r = divmod(N,B)
    R.append(r)

R = R[::-1]

for i in R :
    print(bases[i], end="")