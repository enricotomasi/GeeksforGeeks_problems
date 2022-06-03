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
        static void printList( Node head){
            while(head!=null){
                Console.Write(head.data+" ");
                head = head.next;
            }
            Console.Write("\n");
        }
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                int n = Convert.ToInt32(Console.ReadLine());
                string elements = Console.ReadLine().Trim();
                int key = Convert.ToInt32(Console.ReadLine());
                string []s = elements.Split(' ');
                int[] arr = new int[n];
                arr = Array.ConvertAll(elements.Split(), int.Parse);
                
                Node head = new Node(arr[0]);
                Node tail = head;
                
                for(int i=1;i<n;i++){
                    tail.next = new Node(arr[i]);
                    tail = tail.next;
                }
                
                Solution obj = new Solution();
                Node res = obj.insertInMiddle(head, key);
                printList(res);
                
          }

        }
    }
    
}// } Driver Code Ends


//User function Template for C#


// public class Node{
    //     public int data;
    //     public Node next;
        
    //     public Node(int a){
    //         this.data = a;
    //         this.next = null;
    //     }
        
    // }
    class Solution
    {
        //Complete this function
        public Node insertInMiddle(Node head, int x)
        {
            //Your code here
            var testa = head;
            
            int conta =0;
            while (testa != null)
            {
                conta++;
                testa = testa.next;
            }
            var  arr = new int[conta+1];
            
            //Console.WriteLine(conta);
            
            int mezzo = Convert.ToInt32(Math.Ceiling((decimal)conta/2));
            
            var scorri = head;
            
            for (int i=0; i<mezzo-1; i++)
            {
                scorri = scorri.next;
            }
            
            var nodo = new Node(x);
            nodo.next = scorri.next;
            scorri.next = nodo;
            

            return head;
        }

    }