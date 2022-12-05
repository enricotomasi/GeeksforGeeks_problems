//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        // Your code here
        int mul = n-1;
        int a= 0;
        string ans = "";
        
        for (int i=0; i<n; i++)
        {
            int digit = 0;
            if (sum == 0) break;
            
            if (sum >9) digit = 9;
            else        digit = sum;
         
            sum -= digit;
            
            ans += to_string(digit);
            mul--;
        }
        
        if (sum > 0) return "-1";

        int na = ans.length();
        if (na < n)
        {
            for (int i=0; i<n-na; i++)
            {
                ans += '0';
            }
        }
    
    
        return ans;

    }
};

//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}
// } Driver Code Ends