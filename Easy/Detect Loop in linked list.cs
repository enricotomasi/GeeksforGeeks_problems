//{ Driver Code Starts
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
        static void loopHere(Node head, Node tail, int x){
            if(x==0){
                return ;
            }
            Node walk = head;
            
            for(int i=1;i<x;i++){
                walk = walk.next;
            }
            tail.next = walk;
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
                int[] arr1 = new int[n];
                arr1 = Array.ConvertAll(elements.Split(), int.Parse);
                
                Node head = new Node(arr1[0]);
                Node tail = head;
                
                for(int i=1;i<n;i++){
                    tail.next = new Node(arr1[i]);
                    tail = tail.next;
                }
                int  x = Convert.ToInt32(Console.ReadLine());
                loopHere(head, tail, x);
                Solution obj = new Solution();
                bool res = obj.detectLoop(head);
                if(res){
                    Console.Write("True\n");
                }
                else{
                    Console.Write("False\n");
                }
          }

        }
    }
    
}


// } Driver Code Ends


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
        public bool detectLoop(Node head)
        {
            //Your code here
            if (head == null) return false;
            
            Node doppio = head;
            Node normale = head;
            
            while (doppio != null && doppio.next != null)
            {
                doppio = doppio.next.next;
                normale = normale.next;
                
                if (doppio == normale) return true;
            }
            
            return false;
        }

    }