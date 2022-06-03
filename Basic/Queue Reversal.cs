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
        static void printQueue(Queue<int>q){
            while(q.Count>0){
                Console.Write(q.Peek() +" ");
                q.Dequeue();
            }
        }
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                int N = Convert.ToInt32(Console.ReadLine());
                int[] arr = new int[N];

                string elements = Console.ReadLine().Trim();
                elements = elements + " " + "0";
                arr = Array.ConvertAll(elements.Split(), int.Parse);
                Queue<int> q = new Queue<int>();
                for(int i=0;i<N;i++){
                    q.Enqueue(arr[i]);
                }
                Solution obj = new Solution();
                q = obj.rev(q);
                printQueue(q);
                Console.Write("\n");
          }

        }
    }
}// } Driver Code Ends


//User function Template for C#


class Solution
{
    public Queue<int> rev(Queue<int> q)
    {
        //Code here
        var ans = new Queue<int>();
        
        var lista = new List<int>();
        
        while (q.Count >0)
        {
            lista.Add(q.Dequeue());
        }
        
        for (int i=lista.Count-1; i>=0; i--)
        {
            ans.Enqueue(lista[i]);
        }
        
        
        return ans;
    }
}
