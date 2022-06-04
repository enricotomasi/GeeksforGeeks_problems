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
                int res = obj.findSum(s);
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
    public int findSum(string s)
    {
        //Your code here
        //bool debug = false;
        
        string numero = "";
        
        var numeri = new List<int>();
        
        foreach (char c in s)
        {
            //if (debug) Console.WriteLine($"Carattere: {c}"); 
            if (numero == "")
            {
                //if (debug) Console.WriteLine($"Variabile vuota");
                if ((int)c >=48 && (int)c <= 57) // numero
                {
                    numero += c;
                    //if (debug) Console.WriteLine($"è un numero, numero:{numero}");
                }
            }
            else // numero = qualcosa
            {
                //if (debug) Console.WriteLine($"Variabile piena");
                if ((int)c >=48 && (int)c <= 57) // numero
                {
                    numero += c;
                    //if (debug) Console.WriteLine($"è un numero, numero:{numero}");
                }
                else // lettera
                {
                    numeri.Add(Convert.ToInt32(numero));
                    //if (debug) Console.WriteLine($"è una lettero, numero:{numero} *** Aggiungo alla lista ***");
                    numero = "";   
                }
            }
        }
        
        if (numero != "")
        {
            numeri.Add(Convert.ToInt32(numero));
        }
        
        int somma = 0;
        foreach (int i in numeri)
        {
            somma+=i;
        }
        
        return somma;
    }

}