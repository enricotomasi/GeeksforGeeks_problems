// { Driver Code Starts
import java.util.*;
class Check_Power_Of_4
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t>0)
		{
			long n = sc.nextLong();
			Solution ob = new Solution();
			System.out.println(ob.isPowerOfFour(n));
		t--;
		}
	}
}// } Driver Code Ends


class Solution
{
    int isPowerOfFour(long n)
    {
	// Your code here	
	
	double loga = Math.log(n) / Math.log(4);
	
	double logaF = Math.floor(loga);
	
	if (logaF-loga !=0) return 0;
	else return 1;
	

    }
}