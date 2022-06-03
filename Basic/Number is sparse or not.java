// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;


 // } Driver Code Ends
//User function Template for Java


class Solution
{
    //Function to check if the number is sparse or not.
    public static boolean isSparse(int n)
    {
        // Your code here
        
        String s = Integer.toString(n, 2);
        
        char vecchio = '0';
        for (int i=0; i< s.length(); i++){
            char attuale = s.charAt(i);
            if (attuale == '0') {
                vecchio = attuale;
            } else { // '1'
                if (vecchio == '1') {
                    return false;
                }
                vecchio = '1';
            }
            
        }
        
        
        
        return true;
    }
    
}


// { Driver Code Starts.

class Main {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		
		//testcases
		int t = sc.nextInt();
		
		while(t-->0){
		    
		    		     
            //initializing n
		    int n = sc.nextInt();
		    
		    Solution obj = new Solution();
		    
		    //printing 1 if isSparse returns true
            //else 0
		    if(obj.isSparse(n)){
		        System.out.println("1");
		    } else {
                System.out.println("0");
		    }
		}
	}
}  // } Driver Code Ends