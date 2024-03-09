N = int(input())
list_sum = list(map(int,input().split()))
list_re = [value/max(list_sum)*100 for value in list_sum]

print(sum(list_re) / N)