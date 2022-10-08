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
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                string[] element = Console.ReadLine().Trim().Split(' ');
                int n = Convert.ToInt32(element[0]);
                int k = Convert.ToInt32(element[1]);
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
                
                Solution obj = new Solution();
                int res = obj.getNthFromLast(head, k);
                Console.Write(res+"\n");
          }

        }
    }
}
// } Driver Code Ends


//User function Template for C#



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
        public int getNthFromLast(Node head, int k)
        {
            //Your code here
            int conta = 0;
            var dict = new Dictionary<int, int>(); 

            while (head != null)
            {
                dict.Add(conta, head.data);
                head = head.next;
                conta++;
            }
            
            if (conta-k < 0) return -1;
            return dict[conta-k];
            
        }

    }
