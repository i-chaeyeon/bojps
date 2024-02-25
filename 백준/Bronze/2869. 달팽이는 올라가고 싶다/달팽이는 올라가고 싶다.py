A,B,V = map(int, input().split())

if (V-B)%(A-B) == 0:
    value = (V-B)/(A-B)
    value = int(value)
else:
    value = (V-B)/(A-B)
    value = int(value) + 1

print(value)