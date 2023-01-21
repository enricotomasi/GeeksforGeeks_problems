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
                
                string s = Console.ReadLine().Trim();
                Solution obj = new Solution();
                int res = obj.modified(s);
                Console.Write(res);
                Console.Write("\n");
          }

        }
    }
    
}

// } Driver Code Ends


//User function Template for C#


class Solution
    {
        //Complete this function
        public int modified(string s)
        {
            //Your code here
            int n = s.Length;
            int conta = 1;
            int ans = 0;
            char last = s[0];
            
            for (int i=1; i<n; i++)
            {
                char c = s[i];
                if (conta >= 3)
                {
                    ans++;
                    conta = 1;
                }
                
                if (c == last) conta++;
                else if (c != last) conta = 1;
                
                last = c;
                // Console.WriteLine($"Carattere: {c} conta: {conta}");
            }
            
            if (conta >=3) ans++;
            
            return ans;    
        }

    }
