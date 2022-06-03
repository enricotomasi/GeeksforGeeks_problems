// { Driver Code Starts
//Initial Template for C#

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
        public Node prev;
        
        public Node(int a){
            this.data = a;
            this.next = null;
            this.prev = null;
        }
        
    }
    
    class GFG
    {
        static void printList( Node head){
            Node tmp = head;
            while(head!=null){
                Console.Write(head.data+" ");
                tmp = head;
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
                string[] element = Console.ReadLine().Trim().Split(' ');
                int n = Convert.ToInt32(element[0]);
                string elements = Console.ReadLine().Trim();
                string []s = elements.Split(' ');
                int[] arr1 = new int[n];
                arr1 = Array.ConvertAll(elements.Split(), int.Parse);
                
                Node head = new Node(arr1[0]);
                Node tail = head;
                
                for(int i=1;i<n;i++){
                    Node n1 = new Node(arr1[i]);
                    n1.prev = tail;
                    tail.next = n1;
                    tail = n1;
                }
                element = Console.ReadLine().Trim().Split(' ');
                int pos = Convert.ToInt32(element[0]);
                int data = Convert.ToInt32(element[1]);
                Solution obj = new Solution();
                obj.addNode(head, pos, data);
                printList(head);
                
          }

        }
    }
    
}
// } Driver Code Ends


//User function Template for C#



// public class Node{
    //     public int data;
    //     public Node next;
    //     public Node prev;
    //     public Node(int a){
    //         this.data = a;
    //         this.next = null;
    //         this. prev = null;
    //     }
        
    // }
    class Solution
    {
        //Complete this function
        public void addNode(Node head, int pos, int data)
        {
            //Your code here
            //bool debug = true;
            
            Node temp = head;
            var nuovo = new Node(data);
            
            for (int i=0; i<pos; i++)
            {
                temp = temp.next;
                //if(debug) Console.WriteLine($"Scorro i nodi. Passo N. {i} - pos: {pos} - Nodo: {temp.data}");
            }
            
            //if (debug) Console.WriteLine($"Ultimo nodo: {temp.data}");
            
            nuovo.next = temp.next;
            nuovo.prev = temp;
            temp.next = nuovo;
            
        }

    }