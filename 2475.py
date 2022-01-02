a = input()

num = a.split()
answer = 0
for i in num:
    tmp = int(i)
    answer += tmp*tmp
print(answer%10)

