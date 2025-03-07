class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        s = set()
        arr = []

        for i in range(len(nums)):
            if nums[i] in s:
                arr.append(nums[i])
            else:
                s.add(nums[i])
        
        ans = 0

        for it in arr:
            ans ^= it
        
        return ans
