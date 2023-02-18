//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:

	vector<int> FactDigit(int N)
	{
	    // Code here
	    
	    // cout << "test: fatt(8): " << fattoriale(8) << endl;
	    
	    int i=1;
	    vector<int> ans;
	    
	    int fattoriali[10];
	    fattoriali[0] = 1;
	    
	    for (int i=1; i<10; i++)
	    {
	        fattoriali[i] = i * fattoriali[i-1];
	    }
	    
	    for (int i=9; i>=1; i--)
	    {
	        if (fattoriali[i] <=N)
	        {
	            ans.push_back(i);
	            N -= fattoriali[i];
	            i++;
	        }
	    }
	    
	    sort(ans.begin(), ans.end());
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
		Solution ob;
		vector<int>ans = ob.FactDigit(N);
		for(auto i: ans)
			cout << i;
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends