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
                int n = Convert.ToInt32(Console.ReadLine());
                string a = Console.ReadLine().Trim();
                Solution obj = new Solution();
                long res = obj.binarySubstring(n, a);
                Console.Write(res);
                Console.Write("\n");
          }

        }
    }
    
}// } Driver Code Ends


//User function Template for C#


class Solution
{
    //Complete this function
    public long binarySubstring(int n, string a)
    {
        //Code Here
        
        int uni = 0;
        foreach (char c in a)
        {
            if (c == '1') uni++;
        }
        
        return (uni*((uni-1))/2);
    }

}


