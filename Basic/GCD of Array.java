 
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
                    int Arr[] = new int[N];
                    for(int i = 0;i<N;i++)
                        Arr[i] = sc.nextInt();
                    Solution ob = new Solution();
                    System.out.println(ob.gcd(N,Arr));
                }
        }
}    // } Driver Code Ends


//User function Template for Java

class Solution
{
    
    public static int mcm(int a, int b)
    {
        if (b==0) return a;
        return mcm(b,a%b);
    }
    
    
    public int gcd(int N , int arr[]) 
    { 
       //code here.
       
       int ans = arr[0];
       
       for (int i=1; i<N; i++)
       {
           ans = mcm(arr[i], ans);
       }
       
       return ans;
       
    } 
}