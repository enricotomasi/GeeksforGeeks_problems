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

                int n = Convert.ToInt32(Console.ReadLine());
                var arr = Console.ReadLine();
                Solution obj = new Solution();
                var res = obj.countSort(arr);
                Console.WriteLine(res);
            }

        }
    }

    // Position this line where user code will be pasted.
}
// } Driver Code Ends


//User function Template for C#

class Solution
{
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    public string countSort(string arr)
    {
        //code here
        var mappa = new int[256];
        
        foreach (char c in arr)
        {
            mappa[c]++;
        }
        
        string ans = "";
        
        for (int i=0; i<256; i++)
        {
            for (int j=0; j<mappa[i]; j++)
            {
                ans += (char)i;
            }
        }
        
        return ans;
    }

}

