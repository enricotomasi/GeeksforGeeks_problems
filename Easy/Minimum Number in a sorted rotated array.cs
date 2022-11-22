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
                int res = obj.minNumber(arr,0,n-1);
                Console.WriteLine(res);
            }

        }
    }

    
// } Driver Code Ends
//User function Template for C#

    class Solution
    {
        //Function to find the minimum element in sorted and rotated array.
        public int minNumber(int[] arr, int low,int high)
        {
            //code here
            
            if (arr[low] < arr[high]) return arr[low];
            
            int last = arr[low];
            for (int i=low+1; i<=high; i++)
            {
                if (arr[i] < last) return arr[i];
                last = arr[i];
            }
            
            return arr[high];
            
        }

    }

}

//{ Driver Code Starts.
// } Driver Code Ends