while(True):
    nums = input().split();
    if(nums[0]=='0' and nums[1]=='0'):
        break;
    
    if (int(nums[0]) > int(nums[1])):
        print("Yes")
    else:
        print("No")