//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	vector<int> barcketNumbers(string S)
	{
	    // Your code goes here
	    vector<int> ans;
	    
	    stack<int> parentesi;
        int par = 0;
        
	    for (char c : S)
	    {
	        if (c == '(')
	        {
	           par++;
	           ans.push_back(par);
	           parentesi.push(par);
	        }
	        else if (c == ')')
	        {
	           ans.push_back(parentesi.top());
	           parentesi.pop();
	        }
	    }
	    
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
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	    Solution ob;

   		vector<int> ans = ob.barcketNumbers(s);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends