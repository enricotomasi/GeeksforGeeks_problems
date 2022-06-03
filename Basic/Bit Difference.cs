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
                int[] arr = new int[2];
                string elements = Console.ReadLine().Trim();
                elements = elements + " " + "0";
                arr = Array.ConvertAll(elements.Split(), int.Parse);// input for array elements
                int a = arr[0];
                int b = arr[1];
                Solution obj = new Solution();
                int res = obj.countBitsFlip(a,b);
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
    public int countBitsFlip(int a, int b)
    {
        //Your code here
        int ans = 0;
        
        string sA = Convert.ToString(a,2);
        string sB = Convert.ToString(b,2);
        
        int max = Math.Max(sA.Length, sB.Length);
        
        //Console.WriteLine(sA);
        //Console.WriteLine(sB);
        
        //Console.WriteLine("------------------");
        
        sA = sA.PadLeft(max, '0');
        sB = sB.PadLeft(max, '0');
        
        //Console.WriteLine(sA);
        //Console.WriteLine(sB);
        
        for (int i=0; i < max; i++)
        {
            if (sA[i] != sB[i]) ans++;
        }
        
        return ans;
    }

}