//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalPairs(vector<int>nums, int k)
	{
	    // Code here
	    int n = nums.size();
	    unordered_map<int, int> mappa;
	    int ans = 0;
	    
	    for (int i=0; i<n; i++)
	    {
	        mappa[nums[i]]++;
	    }
	    
	    for (auto it : mappa)
	    {
	        if (mappa.find(it.first-k) != mappa.end() && k!= 0) ans ++;
	        if (k == 0 && it.second > 1) ans++;
	    }
	    
	    
	    return ans;
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends