//{ Driver Code Starts
//Initial Template for Java


import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    
	public static void main (String[] args)
	{
    	 Scanner sc = new Scanner(System.in);
    	 int t = sc.nextInt();
    	 
    	 boolean flag = false;
    	 while(t-- > 0){
    	  int n=sc.nextInt();
    	  int arr[]=new int[n];
    	  for(int i=0;i<n;i++)
    	  {
    	      arr[i]=sc.nextInt();
    	  }
    	  Geeks obj=new Geeks();
    	   System.out.println(obj.countSumSubsets(arr,n));
    	   
    	 }
    }
}


// } Driver Code Ends
//User function Template for Java


class Geeks
{
    static int countSumSubsets(int arr[], int n)
    {
        //Your code here
        int ans = 0;
        
        for (int i=0; i<(1<<n); i++)
        {
            int somma = 0;
            for (int j=0; j<n; j++)
            {
                if ((i & (1 << j)) > 0)
                {
                    somma += arr[j];
                }
            }
            
            if (somma % 2 == 0 && somma != 0) ans++;
            
        }
        
        return ans;
    }
}

//{ Driver Code Starts.

// } Driver Code Ends