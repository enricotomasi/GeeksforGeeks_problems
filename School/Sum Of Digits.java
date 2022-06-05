 
// { Driver Code Starts
//Initial Template for Java


import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
            int N = Integer.parseInt(read.readLine());
            Solution ob = new Solution();
            System.out.println(ob.sumOfDigits(N));
        }
    }
}// } Driver Code Ends


//User function Template for Java
class Solution{
    static int sumOfDigits(int N) {
        // code here
        String nStringa = String.valueOf(N);
        int sommaCifre = 0;
        for (int i=0; i<nStringa.length(); i++) {
            char c = nStringa.charAt(i);
            int cifra = Character.getNumericValue(c);
            sommaCifre += cifra;
        }
        return sommaCifre;
    }
}
       