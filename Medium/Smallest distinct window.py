#User function Template for python3
from collections import defaultdict

class Solution:
    def findSubString(self, str):
        # Your code goes here
        n = len(str)
        nd = len(set(str))
        
        dic = defaultdict(int)
        
        ans = n
        j = 0
        
        for i in range(n):
            dic[str[i]] += 1
            
            if nd == len(dic):
                
                while dic[str[j]] > 1:
                    dic[str[j]] -= 1
                    j += 1
                
                ans = min(ans, i - j + 1)

            
        return ans
    
    
    


#{ 
 # Driver Code Starts
#Initial Template for Python 3


def main():

    T = int(input())

    while(T > 0):
    	str = input()
    	ob=Solution()
    	print(ob.findSubString(str))
    	
    	T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends
