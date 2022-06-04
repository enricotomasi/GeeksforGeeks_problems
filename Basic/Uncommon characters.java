// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main(String args[])throws IOException
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    String A = sc.next();
                    String B = sc.next();
                    Solution ob = new Solution();
                    System.out.println(ob.UncommonChars(A, B));
                }
        }
}// } Driver Code Ends


//User function Template for Java

class Solution
{
    String UncommonChars(String A, String B)
    {
        // code here
        
        String ans = "";
        
        for (int i=0; i< A.length(); i++)
        {
            if (B.indexOf(A.charAt(i)) < 0)
            {
                ans += A.charAt(i);       
            }
        }
        
        for (int i=0; i< B.length(); i++)
        {
            if (A.indexOf(B.charAt(i)) < 0)
            {
                ans += B.charAt(i);       
            }
        }
        
       char[] carr = new char[ans.length()];
       for (int i=0; i<ans.length(); i++)
       {
            carr[i] = ans.charAt(i);
       }
       
       
       String ans2 = ans;
       
       char[] ans3 = new char[ans2.length()];
       
       for (int i=0; i<ans2.length(); i++)
       {
           ans3[i] = ans2.charAt(i);
       }
       
       
       Arrays.sort(ans3);
       
       String ans4="";
       char ultimo = '§';
       for (int i=0; i<ans2.length(); i++)
       {
           if (ans3[i] != ultimo) ans4+=ans3[i];
           ultimo = ans3[i];
       }
       
      
       if (ans4 == "") ans4 = "-1";
        
        return ans4;
    }
}