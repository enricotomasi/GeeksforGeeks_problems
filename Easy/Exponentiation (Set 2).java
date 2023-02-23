//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {   
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0)
        {
            int a = sc.nextInt();
            long b = sc.nextLong();

            Solution ob = new Solution();
            System.out.println(ob.power(a, b));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    static long power(int a, long b)
    {
        //complete the function here
        long M = 1000000007;
        
        if (b < 1) return 1;
        
        long mezzo = power(a, b/2); 
        long ans  = 1;
        
        if (b % 2 == 0) ans *= mezzo % M * mezzo % M;
        else            ans *= mezzo % M * mezzo % M * a;

       return ans % M;
    }
}