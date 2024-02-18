lst = []
abs = []

for i in range (30):
    lst.append(1)

for i in range (28):
    n = int(input())
    lst[n-1] = 0

for i in range (30):
    if lst[i]==1:
        abs.append(i+1)

print(min(abs))
print(max(abs))