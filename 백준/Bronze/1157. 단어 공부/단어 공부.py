dict = []

for i in range (65,91):
    lst = [chr(i), chr(i+32)]
    dict.append(lst)

word = input()
wordcnt = [0 for i in range (26)]

for _ in word: #입력한 단어
    for i in dict: #알파벳 순서
        if _ in i:
            wordcnt[dict.index(i)] += 1

idx = wordcnt.index(max(wordcnt))
maxi = max(wordcnt)
del wordcnt[idx]

if maxi in wordcnt :
    print("?")
else:
    print(dict[idx][0])