//{ Driver Code Starts
using System;

namespace DriverCode {
class GFG {
    static void Main(string[] args) {
        int testcases;
        testcases = Convert.ToInt32(Console.ReadLine());
        while (testcases-- > 0) {

            int n = Convert.ToInt32(Console.ReadLine().Trim());

            Solution obj = new Solution();
            int res = obj.countNumberswith4(n);
            Console.WriteLine(res);
        }
    }
}
}

// } Driver Code Ends

class Solution
{
    public int countNumberswith4(int n) 
    {
        // code here
        int ans = 0;
        
        for (int i = 4; i <= n; i++)
        {
            int j = i;
            
            while (j > 0)
            {
                if (j % 10 == 4)
                {
                    ans++;
                    break;
                }
                
                j /= 10;
            }
            
        }
        
        return ans;
        
    }
}
