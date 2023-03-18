//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	int least_average(vector<int>nums, int k)
	{
	    // Code here
	    int n = nums.size();
	    int ans = 1;
        int somma = 0;
	    
	    for (int i=0; i<k; i++)
	    {
	        somma += nums[i];
	    }
	        
	    int temp = somma;

	    for (int i=k; i<n; i++)
	    {
	        temp = temp - nums[i-k] + nums[i];
	        if (temp < somma)
	        {
	            ans = i - k + 2;
	            somma = temp;
	        }
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
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution ob;
		int ans = ob.least_average(nums, k);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends