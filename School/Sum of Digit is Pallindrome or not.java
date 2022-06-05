 
// { Driver Code Starts
// Initial Template for Java

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
            System.out.println(ob.isDigitSumPalindrome(N));
        }
    }
}// } Driver Code Ends


// User function Template for Java

class Solution {
    int isDigitSumPalindrome(int N) {
        // code here
        Boolean debug = false;
        
        int sommaCifre = 0;
        String stringaN = String.valueOf(N);
        if (debug) System.out.println("StringaN: " + stringaN);
        
        for (int i=0;i<stringaN.length(); i++) {
            char cifraChar = stringaN.charAt(i);
            int cifra = Character.getNumericValue(cifraChar);
            if (debug) System.out.println(" *** " + cifra + " *** ");
            sommaCifre += cifra;
        }
        
        
        String dritto = String.valueOf(sommaCifre);
        String rovescio = "";
       
        for (int i=dritto.length()-1; i>=0; i--) {
           rovescio += dritto.charAt(i);
        }
       
        if (debug) {
           System.out.println(dritto);
           System.out.println(rovescio);
        }
       
        if (dritto.equals(rovescio)) return 1;
        else return 0;
       
    }
}