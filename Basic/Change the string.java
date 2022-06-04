 
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
            Solution ob = new Solution();
            String ans = ob.modify(s);
            System.out.println(ans);
        }
        
    }
}// } Driver Code Ends


//User function Template for Java

class Solution
{
    String modify(String s)
    {
        String ans = "";
        
        if (s.charAt(0) >= 65 && s.charAt(0) <= 90) // maiuscolo
        {
            ans = s.toUpperCase();
        }
        else // minuscolo
        {
            ans = s.toLowerCase();
        }
        
        return ans;
    }
}