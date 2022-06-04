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
                

                string s = Console.ReadLine().Trim();
                
                Solution obj = new Solution();
                char res = obj.getMaxOccuringChar(s);
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
    public char getMaxOccuringChar(string s)
    {
        //Your code here
        
        var lettere = new int[256];
        
        for (int i=0; i<s.Length; i++)
        {
            lettere[s[i]]++;
        }
        
        int max = 0;
        char ans = ' ';
        for (int i=0; i<256; i++)
        {
            //Console.Write($"{lettere[i]} ");
            if (max < lettere[i])
            {
                max = lettere[i];
                ans = (char)i;
            }
        }
        
        //Console.WriteLine(max);
        return ans;
    }

}