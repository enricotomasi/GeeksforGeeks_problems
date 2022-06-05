 
// { Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*; 
class GFG{
    public static void main(String args[]) throws IOException { 
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0){
            String S = read.readLine();
            Solution obj = new Solution();
            System.out.println(obj.convert(S));
            
        }
    } 
} // } Driver Code Ends


//User function Template for Java
class Solution { 
    
    String convert(String s) { 
        
        StringBuilder sb = new StringBuilder();
        for (int i=0; i<s.length(); i++) {
            char c = s.charAt(i);
            int a = 0;
            if (c <= 'Z' && c >= 'A') { // maiuscolo
                a = 'Z' - (c-'A');
            } else if (c <= 'z' && c >= 'a') { //minuscolo
                a = 'z' - (c-'a');
            }
            sb.append((char)a);
        }
        
        return sb.toString();
    }
} 