//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	long long int NoOfChicks(int n)
	{
	    // Code here
	    long long int ans = 1;
	    vector<long long int> mappa;
	    
	    int i=0;
	    mappa.push_back(ans);
	    
	    for (int j=2; j<=n; j++)
	    {
	        if (mappa.size() >= 6)
	        {
	            ans -= mappa[i]; 
	            i++;
	        }
	        
	        mappa.push_back(ans*2);
	        ans *=3;
	        
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends