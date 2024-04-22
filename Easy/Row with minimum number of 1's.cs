//{ Driver Code Starts
// Initial Template for C#

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

                var ip = Console.ReadLine().Trim().Split(' ');
                int N = int.Parse(ip[0]);
                int M = int.Parse(ip[1]);
                List<List<int>> mat = new List<List<int>>();
                for (int i = 0; i < N; i++)
                {
                    mat.Add(new List<int>());
                }
                for (int i = 0; i < N; i++)
                {
                    ip = Console.ReadLine().Trim().Split(' ');
                    for (int j = 0; j < M; j++)
                    {
                        mat[i].Add(int.Parse(ip[j]));
                    }
                }
                Solution obj = new Solution();
                var res = obj.minRow(N, M, mat);
                Console.WriteLine(res);
            }
        }
    }
}

// } Driver Code Ends


//User function Template for C#

class Solution
    {
        //Complete this function
        public int minRow(int N, int M, List<List<int>> A)
        {
            //Your code here
            int ans = -1;
            int min = Int32.MaxValue;
        
            for (int i = 0; i < N; i++)
            {
                int temp = 0;
                
                for (int j = 0; j < M; j++)
                {
                    if (A[i][j] == 1)
                    {
                        temp++;
                    }
                }
                
                //Console.WriteLine($"Row: {i + 1}, temp: {temp}, ans: {ans}, min: {min}");
                
                if (temp < min)
                {
                    //Console.WriteLine("Bingo!");
                    ans = i + 1;
                    min = temp;
                }
                
            }
            
            return ans;
        }

    }
