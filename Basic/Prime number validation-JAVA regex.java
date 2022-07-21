//{ Driver Code Starts


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
            int N = Integer.parseInt(br.readLine().trim());
            Solution ob = new Solution();
            int ans = ob.isPrime(N);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends




class Solution
{
    public int isPrime(int N)
    {
        // code here
        return !new String(new char[N]).matches(".?|(..+?)\\1+")?1:0;
    }
}