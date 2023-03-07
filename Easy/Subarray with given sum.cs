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
                var stringArray = Console.ReadLine().Split(' ');
                int n = int.Parse(stringArray[0]);
                int s = int.Parse(stringArray[1]);
                int[] arr = new int[n];
                stringArray = Console.ReadLine().Split(' ');
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
                var res = obj.subarraySum(arr, n, s);
                foreach(int i in res){
                    Console.Write(i+" ");
                }
                Console.WriteLine();
            }

        }
    }



    
// } Driver Code Ends
//User function Template for C#

    class Solution
    {
        //Function to find a continuous sub-array which adds up to a given number.
        public List<int> subarraySum(int[] arr, int n, int s)
        {
            //code here
            var ans = new List<int>();
            
            int inizio = 0;
            
            int somma = arr[0];
            
            for (int i=1; i<=n; i++)
            {
                while (somma > s && inizio <i-1)
                {
                    somma -= arr[inizio];
                    inizio++;
                }
                
                if (somma == s)
                {
                    ans.Add(inizio+1);
                    ans.Add(i);
                    return ans;
                }
                
                if (i<n) somma += arr[i];
            }
            
            // No res
            ans.Add(-1);
            return ans;
        }

    }

}

//{ Driver Code Starts.
// } Driver Code Ends