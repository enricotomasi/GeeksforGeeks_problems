class Solution:
    def buttonWithLongestTime(self, events: List[List[int]]) -> int:
        d = dict()
        last = 0

        for it in events:
            if it[0] not in d:            
                d[it[0]] = it[1] - last
            else:
                d[it[0]] = max(it[1] - last, d[it[0]])

            last = it[1]
        
        m = -1
        ans = -1

        for it in d:
            if d[it] > m or (d[it] == m and it < ans):
                m = d[it]
                ans = it
        
        return ans
