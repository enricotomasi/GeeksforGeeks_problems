// { Driver Code Starts



using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using DriverCode;

namespace DriverCode
{
    public class Node{
        public int data;
        public Node next;
        
        public Node(int a){
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
                MyStack obj = new MyStack();
                int N = Convert.ToInt32(Console.ReadLine());
                string elements = Console.ReadLine().Trim();
                string []s = elements.Split(' ');
                int k = s.Length;
                int[] arr = new int[k];
                arr = Array.ConvertAll(elements.Split(), int.Parse);
                int i = 0;
                while(k>0){
                    int QueryType = arr[i];
                    i++;
                    if(QueryType == 1){
                        obj.push(arr[i]);
                        i++;
                        k--;
                    }
                    else if(QueryType == 2){
                        int res = obj.pop();
                        Console.Write(res+" ");
                    }
                    k--;
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
    //     public Node next;
        
    //     public Node(int a){
    //         this.data = a;
    //         this.next = null;
    //     }
        
    // }
class MyStack
{
    
    public static Node nodo = null;
    int count = 0;
    
    public void push(int x)
    {
        count++;
        if (nodo != null)
        {
            var temp = new Node(x);
            temp.next = nodo;
            nodo = temp;
        }
        else
        {
            nodo = new Node(x);
        }
    }
    
    public int pop()
    {
        if (nodo == null || count == 0) return -1;
        count--; 
        int ans = nodo.data;
        if (nodo.next != null) nodo = nodo.next;
        return ans;
    }
}