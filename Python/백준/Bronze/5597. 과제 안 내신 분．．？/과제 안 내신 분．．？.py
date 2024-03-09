student_list=[]
for n in range(1,31):
    student_list.append(n)

for i in range(28):
    n = int(input())
    student_list.remove(n)

student_list.sort()

for i in student_list:
    print(i)