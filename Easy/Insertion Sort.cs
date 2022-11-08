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
                obj.insertionSort(arr, n);
                foreach(int i in arr){
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
        //Function to sort the array using insertion sort algorithm.
        public void insertionSort(int[] arr, int n)
        {
            //code here
            for (int i=n-1; i>=0; i--)
            {
                for (int j=0; j<i; j++)
                {
                    if (arr[j] > arr[j+1])
                    {
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
            
            
        }

    }

}

//{ Driver Code Starts.
// } Driver Code Ends