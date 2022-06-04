// { Driver Code Starts
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
                int n = Convert.ToInt32(Console.ReadLine());
                var stringArray = Console.ReadLine().Split(' ');
                List<List<int>> A = new List<List<int>>();
                for (int i = 0; i < n * n; i += n)
                {
                    List<int> row = new List<int>();
                    for (int j = 0; j < n; j++)
                    {
                        row.Add(int.Parse(stringArray[i + j]));
                    }
                    A.Add(row);
                }
                Solution obj = new Solution();
                obj.rotateby90(A,n);
                for (int i = 0; i < A.Count; i++)
                {
                    for(int j = 0;j<A[i].Count;j++)
                        Console.Write(A[i][j] + " ");
                    
                }
                Console.WriteLine();
                


            }

        }


    }

    
 // } Driver Code Ends
//User function Template for C#

    class Solution
    {
        //Function to rotate matrix anticlockwise by 90 degrees.
        public void rotateby90(List<List<int>> matrix,int n)
        {
            //code here
            for (int i=0; i<n; i++)
            {
                for (int j=0; j<i; j++)
                {
                    int temp = matrix[j][i];
                    matrix[j][i] = matrix[i][j];
                    matrix[i][j] = temp;
                }
            }
            
            for (int i=0; i<n; i++)
            {
                int uno = 0;
                int due = n-1;
                
                while (uno<due)
                {
                    int temp = matrix[uno][i];
                    matrix[uno][i] = matrix[due][i];
                    matrix[due][i] = temp;
                    uno++;
                    due--;
                }
            }
            
        }

    }

}

// { Driver Code Starts.  // } Driver Code Ends