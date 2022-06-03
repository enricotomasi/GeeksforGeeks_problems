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

    class GFG
    {
        static void Main(string[] args)
        {
            int testcases;// Taking testcase as input
            testcases = Convert.ToInt32(Console.ReadLine());
            while (testcases-- > 0)// Looping through all testcases
            {
                MyQueue obj = new MyQueue();
                int N = Convert.ToInt32(Console.ReadLine());
                string elements = Console.ReadLine().Trim();
                string[] s = elements.Split(' ');
                int size = s.Length;
                int[] arr = new int[size];
                arr = Array.ConvertAll(elements.Split(), int.Parse);
                int i = 0;
                while(N>0){
                    int QueryType = arr[i++];
                    if(QueryType == 1){
                        obj.push(arr[i++]);
                    }
                    else{
                        Console.Write(obj.pop()+" ");
                    }
                    N--;
                }
                Console.Write("\n");
          }

        }
    }
}// } Driver Code Ends


//User function Template for C#



class MyQueue {

    public int front;
    public int rear;
	public int[] arr = new int[100005];

    public MyQueue()
	{
		this.front=0;
		this.rear=0;
	}
	
	//Function to push an element x in a queue.
	public void push(int x)
	{
	    // Your code here
	    arr[rear] = x;
	    rear++;
	} 

    //Function to pop an element from queue and return that element.
	public int pop()
	{
		// Your code here
		if (front!=rear)
		{
		int ans = arr[front];
		front++;
		return ans;
		}
		else return -1;
		
	} 
}
