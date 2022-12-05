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
                var res = obj.maxStep(arr,n);
                Console.WriteLine(res);
            }

        }
    }

    
// } Driver Code Ends
//User function Template for C#

    class Solution
    {
        //Function to find maximum number of consecutive steps 
        //to gain an increase in altitude with each step.
        public int maxStep(int[] arr,int n)
        {
            //code here
            if (n <= 1) return 0;
            
            int ans = 0;
            int temp = 0;
            int last = arr[0];
            
            for (int i=1; i<n; i++)
            {
                if (arr[i] <= last)
                {
                     ans = Math.Max(ans, temp);    
                     temp = 0;
                }
                else
                {
                    temp++;    
                }
                
                last = arr[i];
            }
            
            return Math.Max(ans, temp);
        }

    }

}

//{ Driver Code Starts.
// } Driver Code Ends