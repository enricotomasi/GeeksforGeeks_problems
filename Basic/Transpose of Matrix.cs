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
                obj.transpose(A,n);
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
        
        //Function to find transpose of a matrix.
        public static readonly bool debug = false;
        public void transpose(List<List<int>> matrix,int n)
        {
            //code here
            for (int riga = 0; riga<n-1; riga++)
            {
                for (int colonna = riga+1; colonna<n; colonna++)
                {
                    //if (debug) Console.WriteLine($"{riga},{colonna} --- {matrix[riga][colonna]} *** {matrix[colonna][riga]}");
                    //if (riga == colonna) continue;
                    int temp = matrix[riga][colonna];
                    matrix[riga][colonna] = matrix[colonna][riga];
                    matrix[colonna][riga] = temp;
                }
            }
            
        }

    }

}

// { Driver Code Starts.  // } Driver Code Ends