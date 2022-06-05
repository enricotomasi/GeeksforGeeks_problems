 
// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*; 

class GFG{
    public static void main(String args[]) throws IOException { 
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        while(t-- > 0){
            String S = sc.nextLine();
            Solution ob = new Solution();
            List<String> ans = ob.splitString(S);
            for (String val: ans) 
                if(val == "")
                    System.out.println(-1); 
                else    
                    System.out.println(val); 
        }
    } 
} 

// } Driver Code Ends


//User function Template for Java

class Solution { 
    static List<String> splitString(String S) { 
        // code here 
        String caratteri = "";
        String numeri = "";
        String speciali = "";
        
        for (int i=0; i<S.length();i++){
            char c = S.charAt(i);
            
            if ( (c >= 'a' && c <= 'z') || 
                 (c >= 'A' && c <= 'Z')) caratteri +=c;
            else if ( c >= '0' && c <='9' ) numeri +=c;
            else speciali +=c;
        }
        
        
        List<String> ans = new ArrayList<String>();
        
        ans.add(caratteri);
        ans.add(numeri);
        ans.add(speciali);
        
        return ans;
    }
} 
