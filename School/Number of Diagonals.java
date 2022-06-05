 
// { Driver Code Starts
//Initial Template for Java


import java.io.*;
import java.util.*;
class GfG
{
    public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    int N = sc.nextInt();
                    Solution ob = new Solution();
                    System.out.println(ob.diagonals(N));
                }
        }
}    // } Driver Code Ends


//User function Template for Java

class Solution{
    public long diagonals(int n) { 
       //code here.
       
       // Formula: [n*(n-3)] / 2
       return (int)(n*(n-3)) /2;
    } 
}