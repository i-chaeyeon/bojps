word = input()
lst = []
asc = 97

for i in range (26):
    lst.append(-1)
    for j in range(len(word)):
        if chr(asc) == word[j] :
            if lst[i] == -1:
                lst[i] = j
    asc+=1

print(*lst)