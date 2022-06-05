 
// { Driver Code Starts
//Initial Template for Java
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0)
        {
            int A=sc.nextInt();
            int B=sc.nextInt();

            Solution ob = new Solution();
            ob.relationalOperators(A,B);
            
        }
    }
}
// } Driver Code Ends


//User function Template for Java
class Solution{
    static void relationalOperators(int A,int B){
        // code here
        
        String frase = "";
        
        if (A>B) frase = " is greater than ";
        if (A<B) frase = " is less than ";
        if (B==A) frase = " is equal to ";
        
        String ans = Integer.toString(A);
        ans += frase;
        ans += Integer.toString(B);

        
        System.out.println(ans);
        
    }
}