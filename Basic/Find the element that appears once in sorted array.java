// { Driver Code Starts
//Initial Template for Java

import java.util.*;

public class GFG 
{
    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        while (t-- > 0) 
        {
            int n = sc.nextInt();
            int arr[] = new int[n];
            for (int i = 0;i < n;i++)
            {
                arr[i] = sc.nextInt();
            }
            
            Solution sol = new Solution();
            System.out.println(sol.findOnce(arr, n));
        }
    }
}// } Driver Code Ends


//User function Template for Java

class Solution 
{
    int findOnce(int arr[], int n)
    {
        // Complete this function
        long matrice[] = new long[100001];
        long matriceNeg[] = new long[100001];
        
        for (int i=0; i<n; i++)
        {
            if (arr[i] >=0) matrice[arr[i]]++;
            else matriceNeg[Math.abs(arr[i])]++;
        }
        
        for (int i=0; i< 100001; i++)
        {
            if (matrice[i] == 1) return i;
            if (matriceNeg[i] == 1) return (i*-1);
        }
        
        return -1;
        
    }
}
}