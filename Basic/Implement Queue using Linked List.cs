// { Driver Code Starts
//Initial Template for C#


using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using DriverCode;

namespace DriverCode
{
    public class QueueNode{
        public int data;
        public QueueNode next;
        
        public QueueNode(int a){
            this.data = a;
            this.next = null;
        }
        
    }
    class GFG
    {
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                MyQueue obj = new MyQueue();
                int N = Convert.ToInt32(Console.ReadLine());
                string elements = Console.ReadLine().Trim();
                string []s = elements.Split(' ');
                int k = s.Length;
                int[] arr = new int[k];
                arr = Array.ConvertAll(elements.Split(), int.Parse);
                int i = 0;
                while(N>0){
                    int QueryType = arr[i++];
                    if(QueryType == 1){
                        obj.push(arr[i++]);
                    }
                    else if(QueryType == 2){
                        int res = obj.pop();
                        Console.Write(res+" ");
                    }
                    N--;
                }
                Console.Write("\n");
          }

        }
    }
}// } Driver Code Ends


//User function Template for C#


//Complete this class

// public class Node{
    //     public int data;
    //     public QueueNode next;
        
    //     public QueueNode(int a){
    //         this.data = a;
    //         this.next = null;
    //     }
        
    // }
class MyQueue{
    
    private QueueNode testa;
    private QueueNode coda;
    
    public void push(int x)
    {
        var temp = new QueueNode(x);
        
        if (testa == null)
        {
            testa = temp;
            coda = temp;
        }
        else
        {
            coda.next = temp;
            coda = temp;
        }
    }
    
    public int pop()
    {
       if (testa == null) return -1;
       
       int ans = testa.data;
       testa = testa.next;
       return ans;

    }
}