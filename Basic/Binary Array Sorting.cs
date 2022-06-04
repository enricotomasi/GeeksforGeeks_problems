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
                obj.binSort(arr,n);
                foreach (int i in arr)
                {
                    Console.Write(i + " ");
                }
                Console.WriteLine();
            }

        }
    }



    
 // } Driver Code Ends
//User function Template for C#

class Solution
{
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    public void binSort(int[] arr, int N)
    {
        //Your code here
   
          /**************
        * No need to print the array
        * ************/
        
        int zeri = 0;
        int uni = 0;
        
        for (int i=0; i<N; i++)
        {
            if (arr[i]==0) zeri++;
            else uni++;
        }
        
        
        for (int i=0; i<zeri; i++)
        {
            arr[i] = 0;
        }
        
        for (int i=zeri; i<N; i++)
        {
            arr[i] = 1;
        }
        
    }

}



// { Driver Code Starts.
}  // } Driver Code Ends