tc = int(input())
sum = 0
for t in range(tc):
    if(input() == '1'):
        sum += 1
    else:
        sum -= 1
if sum < 0:
    print("Junhee is not cute!")
else:
    print("Junhee is cute!")