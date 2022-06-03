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
            // Console.Write(a+"\n");
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
                
                Node head = new Node(arr[0]);
                Node tail = head;
                
                for(int i=1;i<n;i++){
                    tail.next = new Node(arr[i]);
                    tail = tail.next;
                }
                
                Solution obj = new Solution();
                int res = obj.getCount(head);
                Console.Write(res+"\n");
                
          }

        }
    }
}
// } Driver Code Ends


//User function Template for C#



class Solution
    {
        //Complete this function
        public int getCount(Node head)
        {
            //Your code here
            int conta = 1;
            while (head.next != null)
            {
                conta++;
                head = head.next;
            }
            return conta;
        }

    }
