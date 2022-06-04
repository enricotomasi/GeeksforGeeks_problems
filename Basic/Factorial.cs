 
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
                int N = Convert.ToInt32(Console.ReadLine());// Input for size of array
                Solution obj = new Solution();
                ulong res = obj.factorial(N);
                Console.Write(res);
                Console.Write("\n");
          }

        }
    }
    
    
}
// } Driver Code Ends


//User function Template for C#

class Solution
{
    //Complete this function
    //Function to check if there is a pair with the given sum in the array.
    public ulong factorial(int n)
    {
        //Your code here
        if (n==1) return 1;
        if (n==2) return 2;
        
        ulong fact = 1;
        
        for (ulong i=2; i<=(ulong)n; i++)
        {
            fact*=i;
        }
        
        return fact;
    }

}
