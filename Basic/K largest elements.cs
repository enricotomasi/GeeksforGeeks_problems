
// { Driver Code Starts
//Initial Template for C#

using System;
using System.Numerics;
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
                int[] arr = new int[2];
                string elements = Console.ReadLine().Trim();
                elements = elements + " " + "0";
                arr = Array.ConvertAll(elements.Split(), int.Parse);
                int N = arr[0];
                int K = arr[1];
                int[] a = new int[N];
                elements = Console.ReadLine().Trim();
                elements = elements + " " + "0";
                a = Array.ConvertAll(elements.Split(), int.Parse);
                Solution obj = new Solution();
                int[] res = obj.kLargest(a, N, K);
                for(int i = 0;i<res.Length;i++){
                    Console.Write(res[i]+" ");
                }
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
    public int[] kLargest(int[] arr, int n, int k)
    {
        //Your code here
        Array.Sort(arr);
        Array.Reverse(arr);
        
        var ans = new int[k];
        
        for (int i=0; i<k; i++)
        {
            ans[i] = arr[i];
        }
        
        return ans;
    }

}