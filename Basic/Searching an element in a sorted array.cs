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
                
                string ipStr = Console.ReadLine().Trim();
                ipStr = ipStr + " " + "0";
                int[] arr1 = Array.ConvertAll(ipStr.Split(), int.Parse);
                int n = arr1[0];
                int k = arr1[1];
                int[] arr = new int[n];
                string elements = Console.ReadLine().Trim();
                elements = elements + " " + "0";
                int[] arr2 = Array.ConvertAll(elements.Split(), int.Parse);
                for (int i = 0; i < n; i++)
                {
                    arr[i] = arr2[i];
                }
                Solution obj = new Solution();
                int res = obj.searchInSorted(arr,n,k);
                Console.WriteLine(res);
            }

        }
    }

    
 // } Driver Code Ends
//User function Template for C#

    class Solution
    {
        
        
        // Function to find element in sorted array
        // arr: input array
        // n: size of array
        // k: element to be searche
        public int searchInSorted(int[] arr, int n,int k) 
        { 
            //code here
            int inizio = 0;
            int fine = n;
            int centro = 0;
            
            while (inizio <= fine)
            {
                centro = (inizio+fine) /2;
                
                if (arr[centro] == k) return 1;
                
                if (k < arr[centro])
                {
                    fine = centro -1;
                }
                else
                {
                    if (k > arr[centro])
                    {
                        inizio = centro +1;
                    }
                }
            }
            
            return -1;
            
        } 
    }

}

// { Driver Code Starts.  // } Driver Code Ends