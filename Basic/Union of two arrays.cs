 
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
                int m = int.Parse(ip[1]);
                int[] arr = new int[n];
                ip = Console.ReadLine().Trim().Split(' ');
                for (int i = 0; i < n; i++)
                {
                    arr[i] = int.Parse(ip[i]);
                }
                int[] arr1 = new int[m];
                ip = Console.ReadLine().Trim().Split(' ');
                for (int i = 0; i < m; i++)
                {
                    arr1[i] = int.Parse(ip[i]);
                }
                Solution obj = new Solution();
                var res = obj.doUnion(arr, arr1, n, m);
                Console.WriteLine(res);
            }

        }
    }
}// } Driver Code Ends


//User function Template for C#

class Solution
{
    //Function to return the count of the number of elements in
    //the intersection of two arrays.
    public int doUnion(int[] a, int[] b, int n, int m)
    {
        // Your code goes here
        var c = a.Union(b);
        return c.Count();
        
        
    }

}