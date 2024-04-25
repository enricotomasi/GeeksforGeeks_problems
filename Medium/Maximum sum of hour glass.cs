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
                int[][] arr = new int[N][];
                for (int i = 0; i < N; i++)
                {
                    arr[i] = new int[M];
                }
                for (int i = 0; i < N; i++)
                {
                    var ipp = Console.ReadLine().Trim().Split(' ');
                    for (int j = 0; j < M; j++)
                    {
                        arr[i][j] = int.Parse(ipp[j]);
                    }
                }
                Solution obj = new Solution();
                var res = obj.findMaxSum(N, M, arr);
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
        public int findMaxSum(int N, int M, int[][] Mat)
        {
            //Your code here
            if (N < 3 || M < 3)
            {
                return -1;
            }
            
            int ans = -1;
            
            for (int i = 0; i < N - 2; i++)
            {
                for (int j = 0; j < M - 2; j++)
                {
                    int temp = Mat[i][j]     + Mat[i][j + 1]     + Mat[i][j + 2] + 
                                               Mat[i + 1][j + 1] +
                               Mat[i + 2][j] + Mat[i + 2][j + 1] + Mat[i + 2][j + 2];
                    
                    ans = Math.Max(ans, temp);
                }
            }
            
            return ans;
            
        }
    }