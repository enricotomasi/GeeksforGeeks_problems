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
                var res = obj.sumTriangles(A, n);
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
        //Function to return sum of upper and lower triangles of a matrix.
        public List<int> sumTriangles(List<List<int>> matrix, int n)
        {
            //code here
            var ans = new List<int>();
            
            int somma1 = 0;
            int l = 0;
            for (int i=0; i<n; i++)
            {
                for (int j=l; j<n; j++)
                {
                    somma1 += matrix[i][j];
                    //Console.Write($"{matrix[i][j]} ");
                }
                //Console.WriteLine();
                
                l++;
            }
            
            ans.Add(somma1);
            //Console.WriteLine("----------------------");
            
            int somma2=0;
            l = 0;
            for (int i=0; i<n; i++)
            {
                for (int j=0; j<=l; j++)
                {
                    somma2+=matrix[i][j];
                    //Console.Write($"{matrix[i][j]} ");
                }
                l++;
                //Console.WriteLine();
            }
            
            ans.Add(somma2);
            return ans;
        }

    }

}

// { Driver Code Starts.  // } Driver Code Ends