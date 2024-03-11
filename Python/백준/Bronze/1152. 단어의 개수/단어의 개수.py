Str = input()
result =0
for i in range(1,len(Str)):
    if(Str[i] == ' '):
        result += 1
if(Str[-1]==' '):
    result -= 1
    
print(result+1)