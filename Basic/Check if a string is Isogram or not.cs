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
                Solution obj = new Solution();
                bool res = obj.isIsogram(a);
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
    
}// } Driver Code Ends


//User function Template for C#



class Solution
    {
        //Complete this function
        public bool isIsogram(string s)
        {
            //Your code here
            
            var alfabeto = new int[256];
            
            foreach (char c in s)
            {
                alfabeto[c]++;
            }
            
            for (int i=0; i<256; i++)
            {
                if (alfabeto[i]>1) return false;
            }
            
            return true;
        
        }

    }
