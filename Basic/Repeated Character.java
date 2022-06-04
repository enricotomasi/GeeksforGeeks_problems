 
// { Driver Code Starts
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
            String s;
            s = sc.next();
            
            Solution ob = new Solution();
            char res = ob.firstRep(s);
            if (res == '#')
                System.out.println(-1);
            else
                System.out.println(res);
             
        }
    }
}// } Driver Code Ends


//User function Template for Java
class Solution
{
    char firstRep(String S)
    {
        // your code here
        
        int[] mappa = new int[256];
        
        for (int i=0; i<S.length();i++)
        {
            mappa[S.charAt(i)]++;
        }
        
        int min = S.length();
        char c = '#';
        
        for (int i=0; i<255; i++)
        {
            if (mappa[i] >1)
            {
                int pos = S.indexOf(i);
                if (min>pos)
                {
                    min = pos;
                    c = (char)i;
                }
                
                
            }
            
        }
        
        return c;
    }
}