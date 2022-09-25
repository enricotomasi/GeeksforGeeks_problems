//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
	public:
	int Average(vector<int>run, vector<string>status)
	{
	    // Code here
	    int n = run.size();
	    
	    int div = 0;
	    int sum = 0;
	    
	    for (int i=0; i<n; i++)
	    {
	        if (status[i] == "out")
	        {
	            div++;        
	        }
	        sum += run[i];
	    }
	   
	    if (div>0) return ceil(sum/(double)div);
	    return -1;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>run(n);
		vector<string>status(n);
		for(int i = 0; i < n; i++){
			cin >> run[i] >> status[i];
		}
		Solution ob;
		int ans = ob.Average(run, status);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends