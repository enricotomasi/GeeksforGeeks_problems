// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
		int KthDistinct(vector<int>nums,int k)
		{
		    // Code here.
		    int mappa[1000001] = { };
		    
		    for (int i=0; i<nums.size(); i++)
		    {
		        mappa[nums[i]]++;
		    }
		    
		    for (int i=0; i<nums.size(); i++)
		    {
		        if (mappa[nums[i]] == 1)
		        {
		            if (k <=1) return nums[i];
		            else k--;
		        }
		    }
		    
		    return -1;
		}
};

// { Driver Code Starts.
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
		int ans  = ob.KthDistinct(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends