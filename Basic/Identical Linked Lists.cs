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
                int[] arr = new int[n];
                arr = Array.ConvertAll(elements.Split(), int.Parse);
                
                Node head1 = new Node(arr[0]);
                Node tail = head1;
                
                for(int i=1;i<n;i++){
                    tail.next = new Node(arr[i]);
                    tail = tail.next;
                }
                n = Convert.ToInt32(Console.ReadLine());
                elements = Console.ReadLine().Trim();
                s = elements.Split(' ');
                arr = Array.ConvertAll(elements.Split(), int.Parse);
                Node head2 = new Node(arr[0]);
                tail = head2;
                for(int i=1;i<n;i++){
                    tail.next = new Node(arr[i]);
                    tail = tail.next;
                }
                Solution obj = new Solution();
                bool res = obj.isIdentical(head1, head2);
                if(res == true){
                    Console.Write("Identical");
                }
                else{
                    Console.Write("Not identical");
                }
                Console.Write("\n");
                
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
        public bool isIdentical(Node head1, Node head2)
        {
            //Your code here
            while (head1!=null && head2 != null)
            {
                if (head1.data != head2.data) 
                {
                    return false;    
                }
                
                head1 = head1.next;
                head2 = head2.next;
                
                if ( (head1 == null && head2 != null) ||
                     (head2 == null && head1 != null)) return false;
                
            }
            
            return true;
            
            
        }

    }