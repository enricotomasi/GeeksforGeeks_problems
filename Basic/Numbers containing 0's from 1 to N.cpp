//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
	int CountNo(int N)
	{
		// Code here
		int ans = 0;
		for (int i=9; i<=N; i++)
		{
		    int temp = i;
		    bool ok = false;
		    while (temp)
		    {
		        int digit = temp%10;
		        if (digit == 0)
		        {
		            ok = true;
		            break;
		        }
		        temp/=10;
		    }
		    if (ok) ans++;
		}
		
		return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.CountNo(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends