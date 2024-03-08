a,b = input().split()
a = int(a)

if a == 0:
    a = 24

min = a*60 + int(b)
min_cal = min - 45

hour = min_cal // 60
min_result = min_cal % 60

if hour == 24:
    hour = 0

print(hour,min_result)