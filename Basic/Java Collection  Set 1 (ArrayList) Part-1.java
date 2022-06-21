// { Driver Code Starts
import java.io.*;
import java.util.*; 

 // } Driver Code Ends
class Solution 
{ 
    ArrayList<Integer> solve(int N, ArrayList<Integer> A, int Q, ArrayList<Integer> Query) 
    { 
        // code here
        ArrayList<Integer> ans = new ArrayList<Integer>();
        
        if (Q != 2)
        {
            int p = Query.get(0);
            int r = Query.get(1);
            A.add(p,r);
            
            for (int i=0; i<A.size(); i++)
            {
                //System.out.print(A.get(i) + " ");
                ans.add(A.get(i));
            }
            
            // System.out.println();
        }
        else
        {
            int p = Query.get(0);
            
            int ind = -1;
            for (int i=0; i<A.size(); i++)
            {
                if (A.get(i) == p)
                {
                    ind = i;
                }
            }
            
            ans.add(ind);
            //System.out.println(ind);
            
        }
        
        return ans;
    }
}

// { Driver Code Starts.
class GFG{
    public static void main(String args[]) throws IOException { 
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int q=sc.nextInt();
            ArrayList<Integer> a = new ArrayList<>();
            for(int i=0;i<n;i++)
            {
                a.add(sc.nextInt());
            }
            ArrayList<Integer> query = new ArrayList<Integer>();
            if(q==1){
                query.add(sc.nextInt());
                query.add(sc.nextInt());
            }
            else{
                query.add(sc.nextInt());
            }
            Solution obj = new Solution();
            ArrayList<Integer> ans = obj.solve(n,a,q,query);
            for(int i=0;i<ans.size();i++)
            {
                System.out.print(ans.get(i));
                if(q==1)
                System.out.print(" ");
            }
            System.out.println();
        }
    } 
}   // } Driver Code Ends