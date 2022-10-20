//{ Driver Code Starts
//Initial Template for C#

using System;
using System.Collections;
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

                int n = Convert.ToInt32(Console.ReadLine());// Input for size of array
                int[] arr = new int[n];
                string elements = Console.ReadLine().Trim();
                elements = elements + " " + "0";
                int[] arr1 = Array.ConvertAll(elements.Split(), int.Parse);
                for (int i = 0; i < n; i++)
                {
                    arr[i] = arr1[i];
                }
                Solution obj = new Solution();
                List<List<int>> res = obj.stockBuySell(arr, n);
                int p = 0;
                for (int i = 0; i < n - 1; i++)
                {
                    int x = arr[i + 1] - arr[i];
                    if (x > 0)
                    {
                        p += x;
                    }
                }

                if (res.Count == 0)
                {
                    Console.WriteLine("No Profit");
                }
                else
                {
                    Console.WriteLine(check(res, arr, p));
                }

            }

        }

        static int check(List<List<int>> ans, int[] A, int p)
        {
            int c = 0;
            for (int i = 0; i < ans.Count; i++)
                c += A[ans[i][1]] - A[ans[i][0]];
            return (c == p) ? 1 : 0;
        }
    }

    
// } Driver Code Ends
//User function Template for C#


    class Solution
    {
        public List<List<int>> stockBuySell(int[] A, int n)
        {
            //code here
            List<List<int>> ans = new List<List<int>>();
            
            for(int i=0;i<n-1;i++)
            {
                if(A[i] <= A[i+1])
                {
                    List<int> temp = new List<int>();
                    temp.Add(i);
                    temp.Add(i+1);
                    ans.Add(temp);
                }
            }
            
            return ans;
            
        }
    }

}

//{ Driver Code Starts.
// } Driver Code Ends