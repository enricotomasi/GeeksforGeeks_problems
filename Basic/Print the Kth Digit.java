 
// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-- > 0)
        {
            int A = in.nextInt();
            int B = in.nextInt();
            int K = in.nextInt();
            Solution ob = new Solution();
            System.out.println(ob.kthDigit(A,B,K));
        }
    }
}// } Driver Code Ends


//User function Template for Java

class Solution{
    static long kthDigit(int A,int B,int K)
    {
        // code here
        
        long potenza = (long)Math.pow(A,B);
        //System.out.println(potenza);
        
        String numero = String.valueOf(potenza);
        int l = numero.length();
        char c = numero.charAt(l-K);
        
        String sottostringa = "";
        sottostringa += c;
        //System.out.println(sottostringa);
        
        int ans = Integer.valueOf(sottostringa);
        return ans;
    }
}