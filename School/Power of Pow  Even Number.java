 
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
            long n = Long.parseLong(br.readLine().trim());            
            Solution ob = new Solution();
            long ans = ob.sum_of_square_evenNumbers(n);
            System.out.println(ans);
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    public long sum_of_square_evenNumbers(long n){
        // Code here
        
        long ans=0;
        for (long i=1; i<=n; i++) {
            ans += Math.pow(i*2,2); 
        }
        
        
        return ans;
    }
}