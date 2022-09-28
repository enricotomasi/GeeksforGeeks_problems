//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
	public:
   	vector<int> forbenius(int X, int Y)
   	{
   	    // Code here
   	    vector<int> ans;
   	    
   	    if (__gcd(X,Y) != 1)
   	    {
   	        ans.push_back(-1);
   	        return ans;
   	    }
   	    
   	    int first = (X*Y)-(X+Y);
   	    int second = (X-1)*(Y-1)/2;
   	    
   	    ans.push_back(first);
   	    ans.push_back(second);
   	    
   	    return ans;
   	    
    }    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int X, Y;
		cin >> X >> Y;
		Solution ob;
		vector<int> ans = ob.forbenius(X, Y);
		for(auto i : ans)
			cout << i <<" ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends