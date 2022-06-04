 
// { Driver Code Starts
//Initial Template for Java


//Initial Template for Java



import java.io.*;
import java.util.*;


 // } Driver Code Ends
//User function Template for Java


class Solution
{
    long minValueToBalance(long a[] ,int n)
    {
        long primaMeta = 0;
        long secondaMeta = 0;
        
        long meta = n/2;
        
        for (int i=0; i<n; i++)
        {
            if (i>=meta)
            {
                secondaMeta += a[i];
                //System.out.println(a[i] + " --- seconda");
            }
            else
            {
                primaMeta += a[i];
                //System.out.println(a[i] + " --- prima");
            }
        }
    

        return Math.abs(primaMeta-secondaMeta);

    }
}


// { Driver Code Starts.

// Driver class
class Array {

    // Driver code
    public static void main (String[] args) throws IOException{
        // Taking input using buffered reader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int testcases = Integer.parseInt(br.readLine());
        // looping through all testcases
        while(testcases-- > 0){
            int n=Integer.parseInt(br.readLine());

            String line1 = br.readLine();
            String[] a1 = line1.trim().split("\\s+");
            long a[]=new long[n];
            for(int  i=0;i<n;i++)
            {
                a[i]=Long.parseLong(a1[i]);
            }
            Solution ob=new Solution();
            
            long ans=ob.minValueToBalance(a,n);
            System.out.println(ans);
        }
    }
}



  // } Driver Code Ends