// { Driver Code Starts
//Initial Template for Java

import java.util.*;

class GFG 
{
	public static void main (String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0)
		{
		    int n1 = sc.nextInt();
		    int n2 = sc.nextInt();
		    int arr1[] = new int[n1];
		    int arr2[] = new int[n2];
		    for(int i = 0; i < n1; i++)
		     arr1[i] = sc.nextInt();
		     
		    for(int i = 0; i < n2; i++)
		     arr2[i] = sc.nextInt();
		    
		    
		    
		    Geeks obj = new Geeks();
		    System.out.println(obj.commonSum(arr1, arr2));
		}
	}
}




 // } Driver Code Ends
//User function Template for Java

class Geeks
{
    public static long commonSum(int arr1[], int arr2[])
    {
        //Your code here
        int ans = 0;
        
        HashSet<Integer> mappa1 = new HashSet<Integer>();
        HashSet<Integer> mappa2 = new HashSet<Integer>();
        
        for (int i=0; i<arr1.length; i++)
        {
           mappa1.add(arr1[i]);
        }
        
        for (int i=0; i<arr2.length; i++)
        {
           mappa2.add(arr2[i]);
        }
        
        ArrayList<Integer> mappa2lista = new ArrayList<Integer>(mappa2);
        
        for (int i=0; i<mappa2.size(); i++)
        {
            if (mappa1.contains(mappa2lista.get(i)))
                ans += mappa2lista.get(i);
        }
        
       return ans;
    }
}

// { Driver Code Starts.
  // } Driver Code Ends