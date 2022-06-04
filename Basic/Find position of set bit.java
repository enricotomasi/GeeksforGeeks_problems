 
// { Driver Code Starts
//Initial Template for Java

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
            System.out.println(ob.findPosition(N));
        }
    }
}// } Driver Code Ends


//User function Template for Java

class Solution {
    static int findPosition(int N) {
        // code here
        //boolean debug = true;
        
        int pos = 0;
        String s = Integer.toBinaryString(N);
        int lungh = s.length();
        
        //if (debug) System.out.println(s);
        //if (debug) System.out.println("Lunghezza: " + lungh);
        
        int zeri = 0;
        int uni = 0;
        boolean trovato = false;
        
        for (int i=0; i<lungh; i++){
            if (s.charAt(i) == '0'){
                zeri++;
            } else {
                uni++;
                if (!trovato) {
                    trovato = true;
                    pos = lungh-i;
                }
            }
        }
        
        //if (debug) System.out.println("zeri: " + zeri);
        //if (debug) System.out.println("uni : " + uni);
        //if (debug) System.out.println("pos : " + pos);
        
        if (uni >2 || uni == 0) return -1;
        else return pos;
        
    }
};