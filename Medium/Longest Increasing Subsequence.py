#User function Template for python3
class Solution:
    
    #Function to find length of longest increasing subsequence.
 
    def longestSubsequence(self, a, n):

        temp = [a[0]]
        
        for it in a:
            if it > temp[-1]:
                temp.append(it)
            else:
                low = 0
                index = len(temp) - 1

                while low < index:
                    mid = (low + index) // 2
                    if temp[mid] < it:
                        low = mid + 1
                    else:
                        index = mid
                
                temp[index] = it
        
        return len(temp)
            
        
       



#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    for _ in range(int(input())):
        n = int(input())
        a = [ int(x) for x in input().split() ]
        ob=Solution()
        print(ob.longestSubsequence(a,n))
# } Driver Code Ends