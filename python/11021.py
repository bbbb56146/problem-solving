cases = int(input())

for case in range(cases):
    nums = input().split()
    ans = (int(nums[0])+int(nums[1]))
    print("Case #"+str(case+1)+":",ans)