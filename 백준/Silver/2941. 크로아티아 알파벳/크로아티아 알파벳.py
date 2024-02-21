calpha = ["c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="]

word = input()
wordcnt = 0
minus = 0

for i in calpha:
    if i in word:
        if i == "z=":
            plus = word.count(i) - word.count("dz=")
            wordcnt += plus
            minus += 2*plus
        else:
            plus = word.count(i)
            wordcnt += plus
            if i == "dz=":
                minus += 3*plus
            else:
                minus += 2*plus
wordcnt += len(word)-minus
print(wordcnt)
