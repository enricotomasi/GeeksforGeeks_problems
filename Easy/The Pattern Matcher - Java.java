//{ Driver Code Starts
//Initial Template for Java


import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    
	public static void main (String[] args)
	{
	     //Taking input using Scanner class
    	 Scanner sc = new Scanner(System.in);
    	 
    	 //taking count of total testcases
    	 int t = sc.nextInt();
    	 
    	 boolean flag = false;
    	 while(t-- > 0){
    	   
    	   //taking the String
    	   String s=sc.next();
    	   
    	   Geeks obj=new Geeks();
    	   
    	   //calling follPatt() method
    	   //of class Geeks and passing
    	   //String as parameter
    	   obj.follPatt(s);
    	   
    	 }
    }
}


// } Driver Code Ends
//User function Template for Java
class Geeks
{
    static void follPatt(String s)
    {
        //Your code here
        int n = s.length();
        
        boolean bx = true;

        int x = 0;
        int y = 0;
        
        for (int i=0; i<n; i++)
        {
            if (s.charAt(i) == 'x')
            {
                if (!bx)
                {
                    // System.out.println("x: " + x + " y: " + y);
                    if (x != y)
                    {
                        System.out.println("0");
                        return;
                    }
                    else
                    {
                        x = 1;
                        y = 0;
                    }
                }
                else x++;
                bx = true;
            }
            else // y
            {
                bx = false;
                y++;
            }
            
        }
        
        
        // System.out.println("x: " + x + " y: " + y);
        if (x != y) System.out.println("0");
        else        System.out.println("1");
    }
}


//{ Driver Code Starts.

// } Driver Code Ends