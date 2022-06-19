// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
	public:
   	vector<int> prime_pairs(int n)
   	{
   	    // Code here
   	    
   	    vector<int> primi;
   	    vector<int> ans;
   	    
   	    for (int i=2; i<n; i++)
   	    {
   	        if (primo(i))
   	        {
   	            primi.push_back(i);
   	        }
   	    }
   	    
   	    for (auto i : primi)
   	    {
   	        for (auto j : primi)
   	        {
   	            if (i*j <= n)
   	            {
   	                ans.push_back(i);
   	                ans.push_back(j);
   	            }
   	            
   	        }
   	    }
   	    
   	    return ans;
   	    
    }    
    
    bool primo (int n)
    {
        if (n <= 1) return false;
        
        for (int i=2; i*i<=n; i++)
        {
            if (n%i==0) return false;
        }
        return true;
    }
    
    
    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<int> ans = ob.prime_pairs(n);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}  
	return 0;
}  // } Driver Code Ends