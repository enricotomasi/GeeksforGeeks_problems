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
                

                string s1 = Console.ReadLine().Trim();
                string s2 = Console.ReadLine().Trim();
                
                Solution obj = new Solution();
                string res = obj.concatenatedString(s1,s2);
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
        public string concatenatedString(string s1, string s2)
        {
            //Your code here
            
            string ans = "";
            
            for (int i=0; i<s1.Length; i++)
            {
                if (!s2.Contains(s1[i])) ans += s1[i];
            }
            
            for (int i=0; i<s2.Length; i++)
            {
                if (!s1.Contains(s2[i])) ans += s2[i];
            }

            return ans == "" ? "-1" : ans;
        }

    }
