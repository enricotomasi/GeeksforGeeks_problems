 
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
                string res = obj.printNumber(s);
                Console.Write(res);
                Console.Write("\n");
          }

        }
    }
    
}// } Driver Code Ends


//User function Template for C#


class Solution
{
    //Complete this function
    public string printNumber(string s)
    {
        //Your code here
        var traduttore = new Dictionary<char,char>();
        traduttore.Add('a','2');
        traduttore.Add('b','2');
        traduttore.Add('c','2');
        
        traduttore.Add('d','3');
        traduttore.Add('e','3');
        traduttore.Add('f','3');
        
        traduttore.Add('g','4');
        traduttore.Add('h','4');
        traduttore.Add('i','4');
        
        traduttore.Add('j','5');
        traduttore.Add('k','5');
        traduttore.Add('l','5');
        
        traduttore.Add('m','6');
        traduttore.Add('n','6');
        traduttore.Add('o','6');
        
        traduttore.Add('p','7');
        traduttore.Add('q','7');
        traduttore.Add('r','7');
        traduttore.Add('s','7');
        
        traduttore.Add('t','8');
        traduttore.Add('u','8');
        traduttore.Add('v','8');
        
        traduttore.Add('w','9');
        traduttore.Add('x','9');
        traduttore.Add('y','9');
        traduttore.Add('z','9');
        
        var ans = new StringBuilder();
        foreach (char c in s)
        {
            ans.Append(traduttore[c]);
        }
        
        return ans.ToString();
        
    }

}