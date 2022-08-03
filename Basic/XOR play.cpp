//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
public:
	vector<int> xor_play(int n)
	{
	    // code here
	    vector<int> divisori;
	    vector<int> ans;
	    
	    if (n==1)
	    {
	        ans.push_back(0);
	        return ans;
	    }
	    
	    
	    for (int i=1; i<=sqrt(n); i++)
	    {
	        if (n%i == 0 && i!= n)
	        {
	            divisori.push_back(i);
	            ans.push_back(i);
	            if (n/i != i && n/i != n)
	            {
	                divisori.push_back(n/i);
	                ans.push_back(n/i);
	            }
	       }
	    }
	    
	    sort(ans.begin(), ans.end());
	    int icsor = 0;
	    
	    for (int i : divisori)
	    {
	        icsor ^= i;    
	    }
	    
	    ans.push_back(icsor);
	    
	    return ans;
	    
	    
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	vector<int> ans = ob.xor_play(n);
    	for(int i = 0; i < ans.size() - 1; i++)
    		cout << ans[i] <<" ";
    	cout<<"\n";
    	cout<<ans[ans.size() - 1]<<"\n";
    }
	return 0;
}

// } Driver Code Ends