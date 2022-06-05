 
// { Driver Code Starts
import java.util.*;
class PalindromicArray{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
			int n = sc.nextInt();
			int[] a = new int[n];
			for(int i = 0 ;i < n; i++)
				a[i]=sc.nextInt();
			GfG g = new GfG();
			System.out.println(g.palinArray(a , n));
		}
	}
}// } Driver Code Ends


/*Complete the Function below*/
class GfG{
	public static int palinArray(int[] a, int n){
	    for (int i=0; i<n; i++){
	        String elemento = String.valueOf(a[i]);
	        for (int j=0; j<elemento.length(); j++) {
	            if (elemento.charAt(j) != elemento.charAt(elemento.length()-j-1)) return 0;
	        }
	    }
	    return 1;
	}
        
}