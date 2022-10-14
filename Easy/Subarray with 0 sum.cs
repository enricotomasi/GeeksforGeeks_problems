//{ Driver Code Starts
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
                int[] arr = new int[n];
                ip = Console.ReadLine().Trim().Split(' ');
                for (int i = 0; i < n; i++)
                {
                    arr[i] = int.Parse(ip[i]);
                }
                Solution obj = new Solution();
                var res = obj.subArrayExists(arr, n);
                Console.WriteLine(res ? "Yes" : "No");
            }

        }
    }
}

// } Driver Code Ends


//User function Template for C#

class Solution
{
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    public bool subArrayExists(int[] arr, int n)
    {
        //Your code here
        var mappa = new HashSet<int>();
        
        int somma = 0;
        for (int i=0; i<n; i++)
        {
            somma += arr[i];
            
            if (somma == 0) return true;
            if (mappa.Contains(somma)) return true;
            
            mappa.Add(somma);
        }
        
        return false;
    }

}