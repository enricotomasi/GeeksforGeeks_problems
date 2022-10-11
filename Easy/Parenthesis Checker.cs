//{ Driver Code Starts
//Initial Template for C#

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
                bool res = obj.ispar(s);
                if(res){
                    Console.Write("balanced");
                }
                else{
                    Console.Write("not balanced");
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
        public bool ispar(string s)
        {
            //Your code here
            string temp = "";
            
            foreach (char c in s)
            {
                // Console.WriteLine(c);
                if (c == '{')
                {
                    temp += '{';
                }
                else if (c == '[')
                {
                    temp += '[';
                }
                else if (c == '(')
                {
                    temp += '(';
                }
                
                else if (c == '}')
                {
                    if (temp.Length <= 0 || temp[temp.Length-1] != '{') return false;
                    temp = temp.Substring(0, temp.Length-1);
                }
                else if (c == ']')
                {
                    if (temp.Length <= 0 || temp[temp.Length-1] != '[') return false;
                    temp = temp.Substring(0, temp.Length-1);
                }
                else if (c == ')')
                {
                    if (temp.Length <= 0 || temp[temp.Length-1] != '(') return false;
                    temp = temp.Substring(0, temp.Length-1);
                }
                
            }
            
            // Console.WriteLine($"{tonde} {quadre} {graffe}");
            
            if (temp == "") return true;
            return false;
            
        }

    }