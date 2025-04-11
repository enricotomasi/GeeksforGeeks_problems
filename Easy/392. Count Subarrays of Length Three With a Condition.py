class Solution:
    def countSubarrays(self, nums: List[int]) -> int:
        n = len(nums)
        ans = 0

        for i in range(n - 2):
            if nums[i] + nums [i + 2] == nums [i + 1] / 2:
                ans += 1
        
        return ans     
