// { Driver Code Starts
//saksham raj seth
import java.util.*;
class Anagrams{
	public static void main(String[] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		while(t-->0){
			String s=sc.next();
			String s1=sc.next();
			GfG g=new GfG();
			System.out.println(g.remAnagrams(s,s1));
		}
	}
}// } Driver Code Ends


/*Complete the function below*/
class GfG
{
	public int remAnagrams(String s,String s1)
    {
        //add code here.
        int[] arr = new int[256];
        int[] arr1 = new int[256];
        
        for (int i=0; i<s.length(); i++)
        {
            char ch = s.charAt(i);
            int carattere = (int)ch;
            arr[carattere]++;
        }
        
        for (int i=0; i<s1.length(); i++)
        {
            char ch = s1.charAt(i);
            int carattere = (int)ch;
            arr1[carattere]++;
        }
        
       
        
        int diffs = 0;
        
        for (int i=0; i<256; i++)
        {
            diffs+= Math.abs(arr[i]-arr1[i]);
        }
        
        return diffs;
        
    }
}