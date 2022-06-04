 
// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GFG{
    public static void main(String[] args) throws IOException 
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine());

        while (tc-- > 0) {
            int n = Integer.parseInt(br.readLine());
            String line1 = br.readLine();
            String[] a1 = line1.trim().split("\\s+");
            long arr[] = new long[n];
            for (int i = 0; i < n; i++) {
                arr[i] = Long.parseLong(a1[i]);
            }
            Solution ob = new  Solution();
            System.out.println(ob.maxDays(arr,n));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    long maxDays(long arr[], int n){
        // code here 
      
      long max = -1;
      for (int i=0; i<n; i++) {
          max = Math.max(max, arr[i]);
      }
       
       return max;

    }
}