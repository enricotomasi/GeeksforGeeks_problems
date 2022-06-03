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
                string []s = elements.Split(' ');
                int[] arr = new int[2*n];
                arr = Array.ConvertAll(elements.Split(), int.Parse);
                
                Node head = null;
                
                for(int i=0;i<2*n;i+=2){
                    int value = arr[i];
                    int indicator = arr[i+1];
                    Solution obj = new Solution();
                    if(indicator == 0){
                        head = obj.insertAtBeginning(head,value);
                    }
                    else{
                        head = obj.insertAtEnd(head,value);
                    }
                }
                
                printList(head);
                
          }

        }
    }
    
    
}// } Driver Code Ends


//User function Template for C#


class Solution
    {
        //Complete this function
        public Node insertAtBeginning(Node head, int x)
        {
            //Your code here
            var nodo = new Node(x);
            nodo.next = head;

            return nodo;
        }
        
        public Node insertAtEnd(Node head, int x)
        {
            //Your code here
            var nodo = new Node(x);
            
            if (head==null) return nodo;
           
            Node attuale = head;
            while (attuale.next != null) attuale = attuale.next;
            
            attuale.next = nodo;
            
            return head;
        }

    }
