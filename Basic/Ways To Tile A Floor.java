// { Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());

            Solution ob = new Solution();
            System.out.println(ob.numberOfWays(N));
        }
    }
}// } Driver Code Ends


class Solution
{
    static Long numberOfWays(int N)
    {
        // code here
        if (N<2) return (long)N;
        
        long M = (long)Math.pow(10,9)+7;
        
        long ans = N;
        long p = 2;
        long pp = 1;
        
        for (int i=2; i<N; i++)
        {
            ans = (p+pp) %M;
            pp = p;
            p = ans;
        }
        
        return ans;
        
        
    }
}; 
