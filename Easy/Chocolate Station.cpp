//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution 
{
public:
    int getChocolateCost(vector<int> arr, int chocolateMrp)
    {
        // code here
        int n = end(arr)-begin(arr);
        
        long ans = 0;
        long cioc = 0;
        
        for (int i=0; i<n; i++)
        {
            if (cioc < arr[i])
            {
                ans += arr[i] - cioc;
                cioc = arr[i];
            }
        }
        
        return ans * chocolateMrp;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp;
	    cin>>n;
	    vector<int> arr;
	    while(n--)
	    {
	        cin>>tmp;
	        arr.push_back(tmp);
	    }
	    cin>>tmp;
	    Solution obj;
	    cout<<obj.getChocolateCost(arr, tmp)<<"\n";
	}
	return 0;
}
// } Driver Code Ends