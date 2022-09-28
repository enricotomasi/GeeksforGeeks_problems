//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
	public:
	string Play(vector<int>nums, int k)
	{
	    // Code here
	    int mosse = 0;
	    int n = nums.size();
	    
	    for (int i=0; i<n; i++)
	    {
	        int num = nums[i];
	        
	        while (num)
	        {
	            mosse++;
	            num/=k;
	        }
	    }
	    
	    if (mosse %2 != 0) return "Akash";
	    return "Friend";
	    
	    
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
		string ans = ob.Play(nums, k);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends