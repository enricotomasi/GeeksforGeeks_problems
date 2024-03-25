//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:	
	
	/** Try to build binary strings that satisfy the constraint of more or equal 1's than 0's in prefixes. **/
	
	vector <string> ans;
	
	void rec(string temp, int step, int n, int o, int z)
    {
        if (z > o) return;
        
        if (n == step)
        {
            ans.push_back(temp);
            return;
        }
        
        rec(temp + "1", step + 1, n,  o + 1, z);
        rec(temp + "0", step + 1, n,  o, z + 1);
    }
    
    vector<string> NBitBinary(int n)
    {
        rec("1", 1, n, 1, 0);
        return ans;
    }
	
	
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends
