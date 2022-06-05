// { Driver Code Starts
import java.util.*;
class Replace{
public static void main(String[] args){
	Scanner sc=new Scanner(System.in);
	int t=sc.nextInt();
	while(t-->0){
		int n=sc.nextInt();
		Solution g=new Solution();
		System.out.println(g.convertFive(n));
	}
}
}// } Driver Code Ends


/*Complete the function below*/
class Solution{
	public static int convertFive(int n){
    
    String stringa = String.valueOf(n);
    String result = "";
    
    for (int i=0; i<stringa.length(); i++){
        char c=' ';
        if (stringa.charAt(i)=='0') c = '5';
        else c = stringa.charAt(i);
        
        result +=c;
        
    }
    return Integer.valueOf(result);
    
    
    }
} 
