// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main (String[] args)
    {
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            String s = sc.next ();

    		System.out.println (new Sol().divisibleBy11 (s));
        }
        
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends


//User function Template for Java

class Sol
{
    int divisibleBy11 (String S)
    {
        // Your Code Here
        java.math.BigInteger s = new java.math.BigInteger(S);
        java.math.BigInteger undici = new java.math.BigInteger("11");
        java.math.BigInteger zero = new java.math.BigInteger("0");

        if (s.mod(undici).equals(zero)) return 1;
        
        return 0;

    }
}