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
                int[] arr = new int[n];
                var stringArray = Console.ReadLine().Split(' ');
                int j = 0;
                for (int i = 0; i < stringArray.Length; i++)
                {
                    if (stringArray[i].CompareTo(" ") != -1)
                    {
                        arr[j] = int.Parse(stringArray[i]);

                        j++;
                    }
                }
                Solution obj = new Solution();
                var res = obj.findTriplets(arr, n);
                Console.WriteLine(res ? 1 : 0);
            }

        }
    }



    
 // } Driver Code Ends
//User function Template for C#

class Solution
{
    //Function to find triplets with zero sum.
    
    public static readonly bool debug = false;
    
    public bool findTriplets(int[] arr, int n)
    {
        //code here
        for (int i=0; i<arr.Length; i++)
        {
            for (int j=0; j<i+1; j++)
            {
                for (int k=0; k<j+1; k++)
                {
                    
                    if (i==j || j==k || i==k) continue;
                    
                    int a = arr[i];
                    int b = arr[j];
                    int c = arr[k];
                    
                    if (debug) Console.WriteLine($"{i},{j},{k} * {a}, {b}, {b} *** {a+b+c}");
                    
                    if (a+b+c == 0) return true;
                }
            }
        }
        
        return false;
    }

}





// { Driver Code Starts.
}  // } Driver Code Ends