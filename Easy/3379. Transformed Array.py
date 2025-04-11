class Solution:
    def constructTransformedArray(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = []
    

        for i in range(n):
            if nums[i] > 0:
                pos = (i + nums[i]) % n
                ans.append(nums[pos])
            elif nums[i] < 0:
                pos = i - (nums[i] * - 1)
                pos += n
                pos %= n
                ans.append(nums[pos])
            else:
                ans.append(nums[i])
        
        return ans
