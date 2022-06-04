 
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
            int n = sc.nextInt();
            int d = sc.nextInt();
            
            Solution ob = new Solution();
            
            ArrayList<Integer> res = ob.rotate (n, d);
            System.out.println(res.get(0));
            System.out.println(res.get(1));
            
           
        }
    }
}// } Driver Code Ends


//User function Template for Java

class Solution
{
    
    ArrayList<Integer> rotate(int N, int D)
    {
        // your code here
        
        ArrayList<Integer> ans = new ArrayList<Integer>();
        
        D %= 16;
        
        int comp = 16-D;
        
        int right = N << D | N >> comp;
        int left = N >> D | N << comp;
        
        right = (right&((1<<16)-1));
        left = (left&((1<<16)-1));
        
        ans.add(right);
        ans.add(left);
       
       
        return ans;
    }
}