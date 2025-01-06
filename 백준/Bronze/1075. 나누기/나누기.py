a = (int(input())//100)*100
b = int(input())

while True:
    if a % b == 0:
        break
    a +=1
print(str(a)[-2:])