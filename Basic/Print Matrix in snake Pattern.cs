
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
                var res = obj.snakePattern(A);
                for (int i = 0; i < res.Count; i++)
                {
                    Console.Write(res[i] + " ");
                }
                Console.WriteLine();
                
                
            }

        }


    }

    
 // } Driver Code Ends
//User function Template for C#

    class Solution
    {
       //Function to return list of integers visited in snake pattern in matrix.
        public List<int> snakePattern(List<List<int>> matrix)
        {
            //code here
            var ans = new List<int>();
            for (int i=0; i < matrix.Count(); i++)
            {
                if (i%2==0) // pari
                {
                    for (int j=0; j<matrix[i].Count(); j++)
                    {
                        ans.Add(matrix[i][j]);
                    }
                }
                else // dispari
                {
                    for (int j=matrix[i].Count()-1; j>=0; j--)
                    {
                        ans.Add(matrix[i][j]);
                    }
                }
                
            }
            
            return ans;
 
        }

    }

}

// { Driver Code Starts.  // } Driver Code Ends