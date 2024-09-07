T = int(input())

for i in range (T):
    equation = list(map(str, input().split()))
    ans = float(equation[0])
    for idx in range (len(equation)-1):
        operator = equation[idx+1]
        if operator == "@":
            ans *= 3
        if operator == "%":
            ans += 5
        if operator == "#":
            ans -= 7
    
    print("%.2f" %ans)