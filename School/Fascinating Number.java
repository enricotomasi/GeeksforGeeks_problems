// { Driver Code Starts
import java.util.*;

class GFG {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        Solution ob = new Solution();

        int T = sc.nextInt();

        while (T != 0) {
            long n = sc.nextLong();
            if (ob.fascinating(n))
                System.out.println("Fascinating");
            else
                System.out.println("Not Fascinating");
            T--;
        }
    }
}// } Driver Code Ends


class Solution {
    boolean fascinating(long n) {
        // code here
        long n2 = n*2;
        long n3 = n*3;
        
        String s1 = String.valueOf(n);
        String s2 = String.valueOf(n2);
        String s3 = String.valueOf(n3);
        String s = s1+s2+s3;
        
        int[] arr = new int[10];
        
        for (int i=0; i<s.length(); i++) {
            char c = s.charAt(i);
            int numero = Character.getNumericValue(c);
            
            arr[numero]++;
        }
        
        for (int i=1; i<10; i++) {
            if (arr[i] != 1) return false;
        }
        
        return true;
        
    }
}