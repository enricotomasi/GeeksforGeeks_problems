//{ Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.util.*;

class GFG 
{
	public static void main (String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t-- > 0)
		{
		    int n;
		    int d,m,y;
		    n=sc.nextInt();
		    d=sc.nextInt();
		    m=sc.nextInt();
		    y=sc.nextInt();
		    Geeks obj = new Geeks();
		    obj.timeBeforeAfterNdays(d,m,y,n);
		}
		
	}
}




// } Driver Code Ends
//User function Template for Java

class Geeks
{
    public static void timeBeforeAfterNdays(int d, int m, int y, int n)
    {
        //Your code here
        
        Calendar cal = Calendar.getInstance();
        
        cal.set(y, m - 1, d + n); 
        
        int ans = cal.get(cal.DAY_OF_WEEK);
        
        System.out.println("day after n days: " + ans);
    }
    
}

//{ Driver Code Starts.

// } Driver Code Ends