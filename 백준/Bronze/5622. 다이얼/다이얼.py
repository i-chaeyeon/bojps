voca = list(input())
tot = 0
dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
    

for _ in voca:
    for d in dial:
        if _ in str(d):
            num = dial.index(d) + 3
            tot += num


print(tot)