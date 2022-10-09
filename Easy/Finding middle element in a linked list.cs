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
        }
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                int n = Convert.ToInt32(Console.ReadLine());
                string elements = Console.ReadLine().Trim();
                int[] arr = new int[n];
                arr = Array.ConvertAll(elements.Split(), int.Parse);
                
                Node head = new Node(arr[0]);
                Node tail = head;
                
                for(int i=1;i<n;i++){
                    tail.next = new Node(arr[i]);
                    tail = tail.next;
                }
                
                Solution obj = new Solution();
                int res = obj.getMiddle(head);
                Console.WriteLine(res);
                
          }

        }
    }
}
// } Driver Code Ends


//User function Template for C#

/*
    public class Node{
        public int data;
        public Node next;
        
        public Node(int a){
            this.data = a;
            this.next = null;
        }
        
    }
*/

class Solution
{
	//Complete this function
	public int getMiddle(Node head)
	{
		// code here
		int nodi = 0;
		Node copia = head;
		
		while (copia != null)
		{
		    nodi++;
		    copia = copia.next;
		}
		
		int mezzo = nodi / 2;

		for (int i=0; i<mezzo; i++)
		{
		    head = head.next;
		}
		
		return head.data;
		
	}

}