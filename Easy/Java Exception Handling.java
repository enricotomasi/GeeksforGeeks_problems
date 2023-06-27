//{ Driver Code Starts
//Initial Template for Java
/*package whatever //do not write package name here */

import java.io.*;
import java.util.Scanner;

class GFG {
	public static void main (String[] args) {
	    Scanner sc=new Scanner(System.in);
	    int t=sc.nextInt();
	    while(t-->0)
	    {
	        int a=sc.nextInt();
	        int b=sc.nextInt();
	        TestClass obj1=new TestClass(a,b);
	        obj1.findMin();
	    }
	}
}


// } Driver Code Ends
//User function Template for Java

class TestClass
{
    // Add your code here. Define private variables, Constructors to initialize 
    // variables with the given values and a method findMin() which prints the 
    // Minimum value of a$b.
    
    int a = 0;
    int b = 0;
    
    public TestClass(int aa, int bb)
    {
        a = aa;
        b = bb;
    }
    
    void findMin()
    {
        int uno = a*b;
        int due = Integer.MAX_VALUE;
        try
        {
            due = a/b;    
        }
        catch (Exception ex)
        {
            // do nothing
        }
        
        int tre = a+b;
        int quattro = a-b;
        
        int ans = Math.min(uno, Math.min(due, Math.min(tre, quattro)));
        
        System.out.println(ans);
    }
    
    
}

//{ Driver Code Starts.

// } Driver Code Ends