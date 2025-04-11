class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        s = set()

        for it in nums:
            if it < k:
                return -1
            elif it > k:
                s.add(it)
        
        return len(s)
        
