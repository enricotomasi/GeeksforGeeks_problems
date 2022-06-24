// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
	public:
   	vector<int>  common_digits(vector<int>nums)
   	{
   	    // Code here
   	    vector<int> ans;
   	    int mappa [10] = { };
   	    
   	    for (int i : nums)
   	    {
   	        string s = to_string(i);

   	        for (char c : s)
   	        {
   	            string cc = "";
   	            cc += c;
   	            int digit = stoi(cc);
   	            mappa[digit]++;
   	        }
   	    }
   	    
   	    for (int i=0; i<10; i++)
   	    {
   	        if (mappa[i] > 0) ans.push_back(i);
   	    }
   	   
   	    return ans;
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		vector<int> ans = ob.common_digits(nums);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}  
	return 0;
}  // } Driver Code Ends