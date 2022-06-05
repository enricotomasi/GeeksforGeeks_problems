 
// { Driver Code Starts
//Initial Template for Java
import java.util.*;
import java.io.*;
class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(read.readLine());
            Solution ob = new Solution();

            System.out.println(ob.armstrongNumber(n));
        }
    }
}// } Driver Code Ends


//User function Template for Java
class Solution {
    static String armstrongNumber(int n){
        int cubi =0;
        
        String nStringa = String.valueOf(n);
        int lunghezza = nStringa.length();
        
        int usaEgetta = n;
        for (int i=0; i<lunghezza; i++) {
            int cifra = usaEgetta%10;
            usaEgetta /=10;
            cubi += Math.pow(cifra,3);
        }
        
        if (cubi == n) return "Yes";
        else return "No";
        
    }
}