#week17-2.py LeetCode 學習計畫 66. Plus One
class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        #python
        N=len(digits) #有幾位數
        carry=1
        for  i in range(N-1,-1,-1): #到過來的迴圈
            digits[i]=digits[i]+carry#加1
            if digits[i]>=10:#如果加完>=10有進
                carry=1
                digits[i]=digits[i]%10#餘數留原地
            else:#沒有進位
                carry=0
        if carry==0:
            return digits
        else:
            return [carry]+digits