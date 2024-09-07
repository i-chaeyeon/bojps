hour, min, sec = map(int, input().split())
cook_time = int(input())

cook_hour = 0
cook_min = 0
cook_sec = 0 
#1hour = 3600sec
#1min = 60sec
if cook_time >= 3600:
    cook_hour = int(cook_time/3600)
    cook_time = cook_time%3600
if cook_time >= 60:
    cook_min = int(cook_time/60)
    cook_time = cook_time%60
cook_sec = int(cook_time)

hour += cook_hour
min += cook_min
sec += cook_sec

if sec >= 60:
    min += int(sec/60)
    sec = sec%60

if min >= 60:
    hour += int(min/60)
    min = min%60

if hour >= 24:
    hour = hour%24

print(hour, min, sec)