
tc = int(input())
for t in range(tc):
    nums = input().split()
    limit = int(nums[0])*int(nums[1])
    a = int(nums[0])
    b = int(nums[1])
    small = a if a < b else b
    big = b if a<b else a
    for i in range(small,limit,small):
        if ((i%b)==0):
            limit = i
            break;
    print(limit)