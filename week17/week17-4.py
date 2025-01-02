#week17-4.py Leetcode學習計畫 896. Monotonic Array
class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        #希望找到 只增加or只減少(不可以又增加又減少)
        N=len(nums)#有N個數字
        big , small=False,False#一開始不知道有沒有變大變小
        for i in range(N-1):#倆倆比較會少一次
            d=nums[i+1]-nums[i]
            if d>0: big=True#變大
            if d<0: small=True#變小
        if big and small: return False#又大又小-失敗
        else: return True
