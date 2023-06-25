//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG{
    public static void main(String args[])throws IOException{
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            int n = Integer.parseInt(in.readLine());
            String a[] = in.readLine().trim().split("\\s+");
            int arr[] = new int[n];
            for(int i = 0;i < n;i++)
                arr[i] = Integer.parseInt(a[i]);
            Stack<Integer> st = new Stack<>();
            for(int i = 0;i < n;i++)
                st.push(arr[i]);
            
            Solution ob = new Solution();
            Stack<Integer> ans = new Stack<>();
            ans = ob.deleteMid(n, st);
            while(!ans.empty()) {
                int x = ans.pop();
                System.out.print(x + " ");
            }
            System.out.println();
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution
{
    static Stack<Integer> deleteMid(int n, Stack<Integer> st)
    {
        // code here
        Stack<Integer> ans = new Stack<Integer>();
        
        Iterator<Integer> it = st.iterator();
        
        int middle = (int)Math.floor(n/2);
        
        if (n % 2 == 0)
        {
            middle--;
        }
        
        //System.out.println(middle);
        
        int cnt = 0;
        
        while (it.hasNext())
        {
            //System.out.println(cnt);
            if (cnt != middle)
            {
                ans.push(it.next());
                //System.out.println(ans.size());
            }
            else
            {
                it.next();
            }
            cnt++;
            //System.out.println();
        }
        
        //System.out.println(ans.size());
        
        return ans;
    }
}