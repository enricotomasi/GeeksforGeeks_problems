class Solution:
    def containsPattern(self, arr: List[int], m: int, k: int) -> bool:
        n = len(arr)
        count = 0

        for i in range(n - m):
            
            if arr[i] == arr[i + m]:
                count += 1
            else:
                count = 0
            
            if count == (k - 1) * m: 
                return True

        return False
