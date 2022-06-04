 
// { Driver Code Starts
//Initial Template for Java

//Initial Template for Java
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main(String[] args) throws IOException
	{
	        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t =
            Integer.parseInt(br.readLine().trim()); // Inputting the testcases
        while(t-->0)
        {
            String inputLine[] = br.readLine().trim().split(" "); 
            int n = Integer.parseInt(inputLine[0]); 
            int x = Integer.parseInt(inputLine[1]);
            
            int arr[] = new int[(int)(n)];
            
            String inputLine1[] = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine1[i]);
            }
            
            Solution obj = new Solution();
            ArrayList<Integer> ans = obj.firstAndLast(arr, n, x); 
            
            for (Integer val: ans) 
                System.out.print(val+" "); 
            System.out.println();
        }
    } 
} 
            


// } Driver Code Ends


//User function Template for Java
class Solution{
    public ArrayList<Integer> firstAndLast(int arr[], int n, int x)
    {
        // Code here
        
        ArrayList<Integer> ans = new ArrayList<Integer>();
        
        int primo = -1;
        int ultimo = -1;
        
        for (int i=0; i<n; i++)
        {
            int elem = arr[i];
            
            if (elem == x)
            {
                if (primo < 0) primo = i;
                else ultimo = i;
            }
        }
        
        if (primo <0 && ultimo <0)
        {
            ans.add(-1);
        }
        else if (primo >=0 && ultimo <0)
        {
            ans.add(primo);
            ans.add(primo);
        }
        else
        {
            ans.add(primo);
            ans.add(ultimo);
        }
        
        return ans;
    }
}
