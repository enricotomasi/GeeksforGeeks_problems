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
                string tmp = Console.ReadLine().Trim();
                string[] a = tmp.Split(' ');
                Solution obj = new Solution();
                int res = obj.strstr(a[0],a[1]);
                Console.Write(res+"\n");
          }

        }
    }
    
}
// } Driver Code Ends


//User function Template for C#


class Solution
    {
        //Complete this function
        public int strstr(string s, string x)
        {
            //Your code here
            int conta = 0;
            for (int i=0; i< s.Length; i++) 
            {
                if (s[i] == x[0])
                {

                    bool ce = true;
                    for (int j=1; j<x.Length; j++)
                    {
                        if (i+j >= s.Length)
                        {
                            ce = false;
                            break;
                        }
                        
                        //Console.WriteLine($"{j} - {x[j]}");
                        
                        if (s[i+j] != x[j])
                        {
                            ce = false;
                            break;
                        }
                        
                        //Console.WriteLine(ce);
                        
                    }
                    if (ce) return i;
                    
                    
                }
            }
            
            return -1;

        }

    }