 
// { Driver Code Starts
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
            long n = Long.parseLong(br.readLine().trim());
            long a[] = new long[(int)(n)];
            String inputLine[] = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                a[i] = Long.parseLong(inputLine[i]);
            }
            
            Compute obj = new Compute();
            long[] product = obj.minAnd2ndMin(a, n); 
            if(product[0]==-1)
                System.out.println(product[0]);
            else
                System.out.println(product[0]+" "+product[1]);
            
        }
	}
}

// } Driver Code Ends


//User function Template for Java


class Compute 
{
    public long[] minAnd2ndMin(long a[], long n)  
    {
     
     long ans[] = new long[2];
     
     long piccolo1 = 100001;
     long piccolo2 = 100001;
     
     for (int i=0; i<n; i++)
     {
         long elem = a[i];
         piccolo1 = Math.min(piccolo1, elem);
     }
     
     for (int i=0; i<n; i++)
     {
         long elem = a[i];
         if (elem < piccolo2 && elem != piccolo1) piccolo2 = elem;
     }
     
     if (piccolo1 > 100000 || piccolo2 > 100000)
     {
         ans[0] = -1;
         return ans;
     }
     
     
     
     
     ans[0] = piccolo1;
     ans[1] = piccolo2;
     
     return ans;
        
    }
}
