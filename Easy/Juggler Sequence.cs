//{ Driver Code Starts
// Initial Template for C#

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DriverCode {

class GFG {
    static void Main(string[] args) {
        int testcases; // Taking testcase as input
        testcases = Convert.ToInt32(Console.ReadLine());
        while (testcases-- > 0) // Looping through all testcases
        {
            long n = Convert.ToInt64(Console.ReadLine()); // Input for size of array
            Solution obj = new Solution();
            List<long> res = obj.jugglerSequence(n);
            for (int i = 0; i < res.Count; i++) {
                Console.Write(res[i] + " ");
            }
            Console.Write("\n");
        }
    }
}

}

// } Driver Code Ends


// User function Template for C#
class Solution 
{
    // Complete this function
    public List<long> jugglerSequence(long n)
    {
        // Your code here
        var ans = new List<long>();
        ans.Add(n);

        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n = (long)Math.Pow(n, 0.5);
            }
            else
            {
                n = (long)Math.Pow(n, 1.5);
            }
            
            //Console.WriteLine(n);
            
            ans.Add(n);

        }
        
        return ans;
        
    }
}