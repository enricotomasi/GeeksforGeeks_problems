//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	double AverageOfAllSubsets(vector<int>nums)
	{
	    // Code here
	    int n = nums.size();
	    double tot = 0;
	    
	    for (int i=0; i<n; i++) tot += nums[i];

	    int mappa[n]; 
	    memset(mappa, 0, sizeof(mappa)); 
	    mappa[0] = 1;
	    
	    for(int i = 1 ; i < n ; i++)
	        for(int j = i ; j > 0 ; j--)
	            mappa[j] += mappa[j - 1];
	    
	    double ans = 0;
	    
	    for(int i = 1; i <= n; i++) ans += (mappa[i - 1] / (double)i);
	        
	    return ans * tot;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		double ans = ob.AverageOfAllSubsets(nums);
		cout << fixed << setprecision(6) << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends