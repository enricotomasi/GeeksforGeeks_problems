//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
/*You are required to complete below method */

class Solution
{
    public:
    int minSum(int arr[], int n)
    {
        //Write your code here
        
        int a = arr[0];
        int b = arr[1];
        int c = arr[2];
        int d = arr[3];
        
        if (b==0) b = INT_MAX;
        if (c==0) c = INT_MAX;
        if (d==0) d = INT_MAX;
        
        if (n<=4) return min(min(a,b),min(c,d));
        
        for (int i=4; i<n; i++)
        {
            int m = arr[i] + min(min(a,b), min(c,d));
            a = b;
            b = c;
            c = d;
            d = m;
        }
        
        return min(min(a,b),min(c,d));
        
        
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.minSum(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends