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
                string[] ndata = Console.ReadLine().Trim().Split(' ');
                int[] a = new int[n];
                a = Array.ConvertAll(ndata, int.Parse);
                
                Node head = new Node(a[0]);
                Node tail = head;
                
                for(int i=1;i<n;i++){
                    tail.next = new Node(a[i]);
                    tail = tail.next;
                }
                
                element = Console.ReadLine().Trim().Split(' ');
                n = Convert.ToInt32(element[0]);
                ndata = Console.ReadLine().Trim().Split(' ');
                a = new int[n];
                a = Array.ConvertAll(ndata, int.Parse);
                
                Node head1 = new Node(a[0]);
                tail = head1;
                
                for(int i=1;i<n;i++){
                    tail.next = new Node(a[i]);
                    tail = tail.next;
                }
                
                int p = Convert.ToInt32(Console.ReadLine());
                
                Solution obj = new Solution();
                Console.WriteLine(obj.countPairs(head, head1, p));
                
                
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
        public int countPairs(Node head1, Node head2, int x)
        {
            //Your code here
            var m = new HashSet<int>();
            
            while (head2 != null)
            {
                m.Add(head2.data);
                head2 = head2.next;
            }
            
            int ans = 0;
            
            while (head1 != null)
            {
                if (head1.data < x && m.Contains(x - head1.data))
                {
                    ans++;
                }
                
                head1 = head1.next;
            }
            
            return ans;
        }
    }