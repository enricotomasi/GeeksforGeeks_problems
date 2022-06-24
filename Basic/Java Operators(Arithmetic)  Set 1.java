// { Driver Code Starts

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
            String [] S1 = br.readLine().trim().split(" ");
            int A = Integer.parseInt(S1[0]);
            int B = Integer.parseInt(S1[1]);
            int C = Integer.parseInt(S1[2]);
            Solution ob = new Solution();
            double[] ans = ob.FindRoots(A, B, C);
            if(ans.length == 1){
                System.out.println((int)ans[0]);
                continue;
            }
            for(int i = 0; i < ans.length; i++)
                System.out.print(String.format("%6f", ans[i]) + " ");
            System.out.println();
        }
    }
}
// } Driver Code Ends



class Solution
{
    public double[]  FindRoots(int A, int B, int C)
    {
        // code here
        
        // formula: x = [-b +/- sqrt(-b^2 - 4ac)]/2a
        
        double determinante = Math.pow(B,2) - (4*A*C);
        
        if (determinante <0) return new double[] {-1.0};
        
        determinante = Math.sqrt(determinante);
        
        double a = (-B - determinante)/(2*A);
        double b = (-B + determinante)/(2*A);
        
        return new double[] { Math.min(a,b), Math.max(a,b) };
        
    }
}