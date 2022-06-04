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
                string a = Console.ReadLine().Trim();
                string b = Console.ReadLine().Trim();
                Solution obj = new Solution();
                bool res = obj.areRotations(a,b);
                if(res){
                    Console.Write("1");
                }
                else{
                    Console.Write("0");
                }
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
        public bool areRotations(string a, string b)
        {
            //Your code here
            
            if (a.Length != b.Length) return false;
            
            if (a==b) return true;
            
            for (int i=0; i<a.Length; i++)
            {
                string ns = a;
                ns = a.Substring(1,a.Length-1) + a.Substring(0,1);
                a = ns;
                if (a==b) return true;
            }
           
           return false;
           
           
        }

    }