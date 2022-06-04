 
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
            
            String a = sc.next();
            String b = sc.next();
            Solution ob = new Solution();
            if(ob.isSubSequence(a,b))
            System.out.println(1);
            else
            System.out.println(0);
 		
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution
{
    boolean isSubSequence(String A, String B)
    {
     
        // cur0 ultimo carattere trovato in stringa A
        // cur1 0 -> lunghezza di stringa B
        
        int cur0=0;
        for (int cur1=0; cur1<B.length(); cur1++)
        {
            if (B.charAt(cur1) == A.charAt(cur0))
            {
                if (cur0<=A.length()-2) cur0++;
                else return true;
            }
                
        }

        if (cur0 < A.length()) return false;
        
        return true;
      
    }
}