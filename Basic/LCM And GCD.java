 
// { Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String S[] = read.readLine().split(" ");
            Long A = Long.parseLong(S[0]);
            Long B = Long.parseLong(S[1]);

            Solution ob = new Solution();
            Long[] ptr = ob.lcmAndGcd(A,B);
            
            System.out.print(ptr[0]);
            System.out.print(" ");
            System.out.println(ptr[1]);
        }
    }
}// } Driver Code Ends


class Solution
{
    static long gcd(Long A, Long B)
    {
        if (A==0) return B;
        return gcd(B%A,A);
        
    }
    
    static long lcm(Long A, long B)
    {
        return (A*B)/gcd(A,B);
    }
    
    static Long[] lcmAndGcd(Long A , Long B)
    {
        // code here
        Long [] ans = new Long[2];
        ans[0] = lcm(A,B);
        ans[1] = gcd(A,B);
        
        return ans;
    }
};