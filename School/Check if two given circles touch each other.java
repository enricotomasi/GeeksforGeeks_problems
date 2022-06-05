 
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
            String[] S = read.readLine().split(" ");
            int X1 = Integer.parseInt(S[0]);
            int Y1 = Integer.parseInt(S[1]);
            int R1 = Integer.parseInt(S[2]);
            int X2 = Integer.parseInt(S[3]);
            int Y2 = Integer.parseInt(S[4]);
            int R2 = Integer.parseInt(S[5]);
            Solution ob = new Solution();
            System.out.println(ob.circleTouch(X1, Y1, R1, X2, Y2, R2));
        }
    }
}// } Driver Code Ends


// User function template for Java
class Solution {
    int circleTouch(int X1, int Y1, int R1, int X2, int Y2, int R2) {
        //Write your code here
        
        int dist = (int)Math.pow((X2-X1),2) + (int)Math.pow((Y2-Y1),2);
        int somma = (int)Math.pow((R2+R1),2);
        
        if (dist <= somma) return 1;
        else return 0;
        
        

    }
}