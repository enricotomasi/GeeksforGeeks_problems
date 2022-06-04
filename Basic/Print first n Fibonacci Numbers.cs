 
// { Driver Code Starts
//Initial Template for C#



using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace DriverCode
{

    class GFG
    {
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                int N = Convert.ToInt32(Console.ReadLine());
                Solution obj = new Solution();
                long[] res = obj.printFibb(N);
                for(int i=0;i<res.Length;i++){
                    Console.Write(res[i]+" ");
                }
                Console.Write("\n");
            }
        }
    }
}// } Driver Code Ends


//User function Template for C#


class Solution
{
    //Complete this function
    public long[] printFibb(int n)
    {
        //Your code here
        var ans = new long[n];
        
        if (n==0) return ans;
        ans[0] = 1;
        
        if (n==1) return ans;
        
        ans[1] = 1;
        if (n==2) return ans;
        
        for (int i=2; i<n; i++)
        {
            ans[i] = ans[i-1] + ans[i-2];
        }
        
        return ans;
        
    }

}