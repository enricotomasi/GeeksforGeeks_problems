//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void ric(vector<int> &nums, vector<int> &ans, int l, int h)
    {
        if (l>h) return;
        
        int mezzo = (l+h)/2;
        
        ans.push_back(nums[mezzo]);
        ric(nums, ans, l, mezzo-1);
        ric(nums, ans, mezzo+1, h);
    }
    
    vector<int> sortedArrayToBST(vector<int>& nums)
    {
        // Code here
        int n = nums.size();
        vector<int> ans;
        
        ric(nums, ans, 0, n-1);
        
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
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int>ans = obj.sortedArrayToBST(nums);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends