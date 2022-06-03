// { Driver Code Starts
//initial code
import java.util.Scanner;
import java.lang.*;
class MiddlePattern
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t>0)
        {
            String s=sc.next();
            GfG g=new GfG();
            g.printPattern(s);
            System.out.println();
            t--;
        }
    }
}

// } Driver Code Ends


class GfG
{
/*method prints the given pattern in a single line */
	void printPattern(String s)
	{
	    //Your code here
	    int n = s.length();
	    int meta = (int)n/2;
	    
	    //System.out.println(n);
	    //System.out.println(meta);
	    
	    String f = "";
	    
	    for (int i=0; i<n; i++)
	    {
	        int cur = 0;
	        if (meta+i > n-1) // superata la fine
	        {
	            cur = i-meta-1;
	        }
	        else // siamo entro la fine
	        {
	            cur = meta+i;
	        }
	        f += s.charAt(cur);
	    }
	    
	    //System.out.println(f);
	    
	    for (int i=0; i<n; i++)
	    {
	        for (int j=0; j<i+1; j++)
	        {
	            System.out.print(f.charAt(j));
	        }
	        System.out.print ("$ ");
	    }

    }
}

