 
// { Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            String s = br.readLine().trim();
            String S[] = s.split(" ");
            int l = Integer.parseInt(S[0]);
            int b = Integer.parseInt(S[1]);
            int h = Integer.parseInt(S[2]);
            Solution ob = new Solution();
            long[] ans = ob.find(l, b, h);
            for(int i = 0; i < ans.length; i++)System.out.print(ans[i] + " ");
            System.out.println();
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    public long[] find(int l1, int b1, int h1){
        // code here
        //System.out.println(Long.MAX_VALUE);
        
        long l = (long)l1;
        long b = (long)b1;
        long h = (long)h1;
        
        long surface = 2 * (b*h + h*l + l*b);
        long volume = l * b * h;
        
        long[] ans = {surface, volume};
        return ans;
    }
}