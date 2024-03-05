def removeDuplicates(self, nums: list[int]) -> int:
        myDict = dict()
        i = 0
        k = 0
        while(i!=len(nums)):
            if nums[i]!='_' and nums[i]in myDict:
                nums.pop(i)
                nums.append('_')
                i=i-1
                k = k + 1
            else:
                myDict[nums[i]] = 1
            i = i+1
        k = len(nums) - k
        return k                  
nums = [1,1,2]
print(removeDuplicates(nums))