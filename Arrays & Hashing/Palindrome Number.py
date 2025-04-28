class Solution:
    def isPalindrome(self, x: int) -> bool:
        check = None
        temp = str(x)
        if(len(temp)>1):
            right = len(temp)-1
            for left in range(right+1):
                if(left!=right):
                    if(temp[left]==temp[right]):
                        check = True
                    else: 
                        check = False
                        break
                elif(left==right):
                    break
                right = right - 1
        elif(len(temp)==1):
            check = True
        return check
        
