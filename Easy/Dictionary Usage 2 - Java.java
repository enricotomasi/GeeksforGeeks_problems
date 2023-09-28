//{ Driver Code Starts
//Initial Template for Java


/*package whatever //do not write package name here */

import java.util.*;

class GFG 
{
    
    @SuppressWarnings("unchecked")
	public static void main (String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		while(t-- > 0)
		{
		    Dictionary dn = new Hashtable();
		    int n = sc.nextInt();
		    int pages[] = new int[n];
		    String words[] = new String[n];
		    for(int i = 0; i < n; i++)
		       pages[i] = sc.nextInt();
		        
            for(int i = 0; i < n; i++)
                words[i] = sc.next();
		    for(int i = 0; i < n; i++)
		     dn.put(pages[i], words[i]);
		     
		    int pg = sc.nextInt();
		   Geeks obj = new Geeks();
		   obj.Dictionary(dn);
		   obj.sizeAfterRemoval(dn, pg);
		}
	}
}



// } Driver Code Ends
//User function Template for Java

class Geeks
{
    
    @SuppressWarnings("unchecked")
    public static void Dictionary(Dictionary dn)
    {
      //Your code here
      System.out.println("Size before removing word: " + dn.size());
        
    }
    
    public static void sizeAfterRemoval(Dictionary dn, int  pg)
    {
       //Your code here
       System.out.println("Word removed from dictionary: " + dn.remove(pg));
       System.out.println("Size after removing word: " + dn.size());
    }
}


//{ Driver Code Starts.

// } Driver Code Ends