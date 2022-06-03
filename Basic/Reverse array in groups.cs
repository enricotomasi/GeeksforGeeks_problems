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
                string elements = Console.ReadLine().Trim();
                elements = elements + " " + "0";
                int[] arr1 = Array.ConvertAll(elements.Split(), int.Parse);
                int sizeOfArray = arr1[0];// Input for size of array
                int K = arr1[1];
                int[] arr = new int[sizeOfArray];

                elements = Console.ReadLine().Trim();
                elements = elements + " " + "0";
                arr1 = Array.ConvertAll(elements.Split(), int.Parse);// input for array elements
                for(int i = 0;i<sizeOfArray;i++){
                    arr[i] = arr1[i];
                }
                
                Solution obj = new Solution();
                obj.reverseInGroups(arr, sizeOfArray,K);
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
    //Complete this function
    public void reverseInGroups(int[] A,int N,int K)
    {
        //Your code here
        
        var ans = new List<int>();
        K--;
        
        for (int i=0; i<N; i+=K)
        {
            var temp = new List<int>();
            for (int j=i; j<=i+K; j++)
            {
                if (j>N-1) break;
                temp.Add(A[j]);
            }
            i++;
            
            temp.Reverse();
            ans.AddRange(temp);
            
        }
        
        for (int i=0; i<N; i++)
        {
            A[i] = ans[i];
        }

    }

}



// { Driver Code Starts.
}  // } Driver Code Ends