 
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
            
            String input[] = read.readLine().split(" ");
            int m = Integer.parseInt(input[0]);
            int n = Integer.parseInt(input[1]);
            int k = Integer.parseInt(input[2]);
            Solution ob = new Solution();
            System.out.println(ob.kthCharacter(m,n,k));
        }
    }
}// } Driver Code Ends


//User function Template for Java

class Solution
{
    char kthCharacter(int m, int n, int k)
    {
        // code here
        
	    String binp = Integer.toBinaryString(m);
	    
	    //System.out.println("Binp :" + binp);
	    
	    if (n<=0) return binp.charAt(k-1);
	    
	    String binca  = "";
	    
	    for (int i=0; i<n; i++)
	    {
    	    binca = "";
    	    for (char c : binp.toCharArray())
    	    {
    	        if (c != '0') binca += "10";
    	        else binca += "01";
    	    }
    	    
    	    binp = binca;
	    }
    	
    	//System.out.println("binca:" + binca);
	    
	    //return 0;
	    return binca.charAt(k-1);
        
        
        
    }
}