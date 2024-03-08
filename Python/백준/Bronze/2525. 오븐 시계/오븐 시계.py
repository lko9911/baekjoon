a,b = map(int,input().split())
c = int(input())

if a==0:
    a=24

min = a*60 + b + c
hour = min // 60
min_result = min % 60

if hour >= 24:
    hour -= 24

print(hour,min_result)
