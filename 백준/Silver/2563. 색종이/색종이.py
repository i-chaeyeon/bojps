N = int(input()) #검은 색종이 갯수

whitePaper = [] #흰 도화지

## 흰 도화지 초기화
for _ in range (100):
    lst = [0 for i in range (100)]
    whitePaper.append(lst)

## 검은종이 넓이
for _ in range (N):
    x1,y1 = map(int,input().split())
    for v in range (x1,x1+10):
        if v > 100 :
            break
        for p in range (y1,y1+10):
            if p > 100 :
                break
            if whitePaper[p][v] != 1:
                whitePaper[p][v] = 1

                
area = 0

for _ in whitePaper:
    area += _.count(1)

print(area)