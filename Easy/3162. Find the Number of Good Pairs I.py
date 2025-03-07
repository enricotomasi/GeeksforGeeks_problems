class Solution:
    def numberOfPairs(self, nums1: List[int], nums2: List[int], k: int) -> int:
        ans = 0

        for i in range(len(nums1)):
            for j in range(len(nums2)):
                if nums1[i] % (nums2[j] * k) == 0:
                    # print(f"{i}, {j}   **** {nums1[i]}, {nums2[j]}   ****** {nums1[i]}, {nums2[j] * k}    ****** {nums1[i] % (nums2[j] * k)} ")
                    ans += 1
        
        return ans
        
