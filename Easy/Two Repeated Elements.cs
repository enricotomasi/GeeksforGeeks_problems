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
                int[] arr = new int[n+2];
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
                var res = obj.twoRepeated(arr,n);
                Console.WriteLine(res[0] + " " + res[1]);
            }

        }
    }

    
// } Driver Code Ends
//User function Template for C#

    class Solution
    {
       //Function to find two repeated elements.
        public List<int> twoRepeated(int[] a,int n)
        {
            //code here
            var ans = new List<int>();
            
            var mappa = new HashSet<int>();
            
            for (int i=0; i<n+2; i++)
            {
                if (mappa.Contains(a[i])) ans.Add(a[i]);
                else mappa.Add(a[i]);
            }
            
            return ans;
        }

    }

}

//{ Driver Code Starts.
    
// } Driver Code Ends