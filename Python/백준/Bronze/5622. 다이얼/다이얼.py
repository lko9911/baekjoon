num = input()
result = 0
for i in range(len(num)): 
    if(ord(num[i]) >= 65 and ord(num[i]) <= 67): #ABC
        result += 3
    elif(ord(num[i]) >= 68 and ord(num[i]) <= 70): #DEF
        result += 4
    elif(ord(num[i]) >= 71 and ord(num[i]) <= 73): # GHI
        result += 5
    elif(ord(num[i]) >= 74 and ord(num[i]) <= 76): # JKL
        result += 6   
    elif(ord(num[i]) >= 77 and ord(num[i]) <= 79): # MNO
        result += 7            
    elif(ord(num[i]) >= 80 and ord(num[i]) <= 83): # PQRS
        result += 8 
    elif(ord(num[i]) >= 84 and ord(num[i]) <= 86): # TUV
        result += 9 
    elif(ord(num[i]) >= 87 and ord(num[i]) <= 90): # WXYZ
        result += 10 

print(result)