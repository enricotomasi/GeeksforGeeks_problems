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
                
                int sizeOfArray = Convert.ToInt32(Console.ReadLine());// Input for size of array
                int[] L = new int[sizeOfArray];
                int[] R = new int[sizeOfArray];
                string elements = Console.ReadLine().Trim();
                elements = elements + " " + "0";
                int[] arr1 = Array.ConvertAll(elements.Split(), int.Parse);
                for (int i = 0; i < sizeOfArray; i++)
                {
                    L[i] = arr1[i];
                }
                elements = Console.ReadLine().Trim();
                elements = elements + " " + "0";
                arr1 = Array.ConvertAll(elements.Split(), int.Parse);
                int maxx = int.MinValue;
                for (int i = 0; i < sizeOfArray; i++)
                {
                    R[i] = arr1[i];
                    maxx = Math.Max(maxx,R[i]);
                }

                Solution obj = new Solution();
                int res = obj.maxOccured(L,R, sizeOfArray,maxx);
                Console.WriteLine(res);
            }

        }
    }

    
// } Driver Code Ends
//User function Template for C#

    class Solution
    {
        // L and R are input array
        // maxx : maximum in R[]
        // n: size of array
        // arr[] : declared globally with size equal to maximum in L[] and R[]
        //Function to find the maximum occurred integer in all ranges.
        public int maxOccured(int[] L,int[] R, int n,int maxx)
        {
            //Your code here
            int[] mappa = new int[1000001];
            
            for (int i=0; i<n; i++)
            {
                for (int j=L[i]; j<=R[i]; j++)
                {
                    mappa[j]++;
                }
            }
            
            int max = Int32.MinValue;
            int ans = 0;
            for (int i=0; i<1000001; i++)
            {
                if (max < mappa[i])
                {
                    max = mappa[i];
                    ans = i;
                }
            }
            
            return ans;
        }
    }
}

//{ Driver Code Starts.
// } Driver Code Ends