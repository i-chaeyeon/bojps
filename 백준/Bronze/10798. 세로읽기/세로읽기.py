lst = []
maxnum = 15


for _ in range (5):
    new = []
    for bl in range (15):
        new.append('*')
    newword = input()
    new[0:len(newword)] = newword
    lst.append(new)

for i in range (15):
    for j in range (5):
        if lst[j][i] != '*':
            print(lst[j][i], end="")
        else:
            continue