GPA = ["A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0", "P", "F"]
GPAscore = []
maxscore = 4.5
timesum = 0
totsum = 0

for _ in range (10):
    GPAscore.append(maxscore)
    maxscore -= 0.5

for _ in range (20):
    sub, time, grade = input().split()
    if grade == "P":
        continue
    for gpa in GPA:
        if grade == gpa:
            grade = GPAscore[GPA.index(gpa)]
    time = float(time)
    totsum += time*grade
    timesum += time

result = totsum/timesum

print(result)