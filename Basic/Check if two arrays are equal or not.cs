 
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


                var ip = Console.ReadLine().Trim().Split(' ');
                int n = int.Parse(ip[0]);
                long[] arr = new long[n];
                ip = Console.ReadLine().Trim().Split(' ');
                for (int i = 0; i < n; i++)
                {
                    arr[i] = long.Parse(ip[i]);
                }
                long[] arr1 = new long[n];
                ip = Console.ReadLine().Trim().Split(' ');
                for (int i = 0; i < n; i++)
                {
                    arr1[i] = long.Parse(ip[i]);
                }
                Solution obj = new Solution();
                var res = obj.check(arr, arr1, n);
                Console.WriteLine(res ? 1 : 0);
            }

        }
    }
}// } Driver Code Ends


//User function Template for C#

class Solution
{
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    public bool check(long[] A, long[] B, int n)
    {
        // Your code goes here
        
        Array.Sort(A);
        Array.Sort(B);
        
        for (int i=0; i<n; i++)
        {
            if (A[i] != B[i]) return false;
        }
        
        return true;
    }

}