// { Driver Code Starts
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
                int N = Convert.ToInt32(Console.ReadLine());
                
                Solution obj = new Solution();
                List<string> res = obj.generate(N);
                for(int i = 0;i<res.Count;i++){
                    Console.Write(res[i]+" ");
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
    public List<string> generate(int n)
    {
        //Your code here
        
        var ans = new List<string>();
        
        for (int i=1; i<=n; i++)
        {
            ans.Add(Convert.ToString(i,2));
        }
        
        return ans;
    }

}