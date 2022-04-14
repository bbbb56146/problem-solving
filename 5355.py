
tc = int(input())
for t in range(tc):
    exp = input().split();
    num = float(exp[0])
    for op in exp[1:]:
        if (op=='@'):
            num*=3
        elif (op =='%'):
            num +=5
        elif (op == '#'):
            num -=7
    print("%.2f" %num)