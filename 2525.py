ab = list(input().split())
hour=int(ab[0])
min=int(ab[1])
add = int(input())
hour += int((min+add)/60)
min = (min+add)%60
print(hour%24, min)