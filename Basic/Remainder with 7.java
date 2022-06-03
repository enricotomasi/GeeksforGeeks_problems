// { Driver Code Starts
import java.util.*;

class GFG
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t>0)
		{
			String str = sc.nextLine();
			Solution obj = new Solution();
			System.out.println(obj.remainderWith7(str));
		t--;
		}
	}
}// } Driver Code Ends


class Solution
{
    // Complete the function
    int remainderWith7(String num)
    {
        // Your code here
        java.math.BigInteger numero = new java.math.BigInteger(num);
        java.math.BigInteger sette = new java.math.BigInteger("7");
        java.math.BigInteger ans = numero.mod(sette);
        
        return ans.intValue();
        
        
        
    }
}
