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
                long N = Convert.ToInt64(Console.ReadLine());
                Solution obj = new Solution();
                bool res = obj.isPowerofTwo( N);
                if(res){
                    Console.Write("YES");
                }
                else{
                    Console.Write("NO");
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
        public bool isPowerofTwo( long n)
        {
            //Your code here
            
            if (n==0) return false;
            
            double loga = Math.Log(n,2);
            
            double logaTroncato = Convert.ToInt64(loga);
            
            //Console.WriteLine(loga);
            //Console.WriteLine(logaTroncato);
            //Console.WriteLine(loga == logaTroncato);
            //Console.WriteLine(loga-logaTroncato);

            if (Math.Abs(loga - logaTroncato) < 0.000000000001) return true;
            else return false;
  
        }

    }