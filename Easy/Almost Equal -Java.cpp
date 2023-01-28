//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    
	public static void main (String[] args)
	{
	     //taking input using Scanner class
    	 Scanner sc = new Scanner(System.in);
    	 
    	 //taking total number of testcases
    	 int t = sc.nextInt();
    	 
    	 boolean flag = false;
    	 while(t-- > 0){
    	   
    	   //taking the 2 strings
    	   String s1=sc.next();
    	   String s2=sc.next();
    	   
    	   //creating an object of class Geeks
    	   Geeks obj=new Geeks();
    	   
    	   //calling coutChars method
    	   //of class Geeks and passing
    	   //both the Strings and printing
    	   //the result
    	   System.out.println(obj.coutChars(s1,s2));
    	   
    	 }
    }
}




// } Driver Code Ends
//User function Template for Java

/*Function to count number of characters 
* to make s1 and s2 equal
* s1 : first string
* s2 : second string
*/
class Geeks{
    
    static int coutChars(String s1, String s2)
    {
       //Your code here
       int n1 = s1.length();
       int n2 = s2.length();
       
       int[] mappa1 = new int[256];
       int[] mappa2 = new int[256];
       
       for (int i=0; i<n1; i++) mappa1[s1.charAt(i)]++;
       for (int i=0; i<n2; i++) mappa2[s2.charAt(i)]++;
       
       int ans = 0;
       for (int i=0; i<256; i++)
       {
           ans += Math.abs(mappa2[i] - mappa1[i]);
       }
       
       return ans;
    }
}

//{ Driver Code Starts.

// } Driver Code Ends