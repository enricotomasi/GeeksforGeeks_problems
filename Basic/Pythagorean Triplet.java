 
// { Driver Code Starts
//Initial Template for Java



import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine());
        while (tc-- > 0) {
            int n = Integer.parseInt(br.readLine());
            int[] arr = new int[n];
            String[] inputLine = br.readLine().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            boolean ans = new Solution().checkTriplet(arr, n);
            System.out.println(ans ? "Yes" : "No");
        }
    }
}// } Driver Code Ends


//User function Template for Java



class Solution {
    boolean checkTriplet(int[] arr, int n) {
        // code here
        
        if (n<3) return false;
        
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++) {
                for (int k=j+1; k<n; k++) {
                    int primo = (int)Math.pow(arr[i],2);
                    int secondo = (int)Math.pow(arr[j],2);
                    int terzo = (int)Math.pow(arr[k],2);
                    
                    if (primo+secondo == terzo || 
                        primo+terzo == secondo || 
                        secondo+terzo == primo) return true;
                }
            }  
        }
        
        return false;
        
        
        
    }
}