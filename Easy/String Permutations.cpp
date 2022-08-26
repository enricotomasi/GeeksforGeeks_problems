//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    void risolvi (string& s, vector<string> &ans, int pos)
    {
        int n = s.length();
        
        if (pos==n-1)
        {
            ans.push_back(s);
            return;
        }
        
        for (int i=pos;i<n; i++)
        {
            swap(s[pos], s[i]);
            
            risolvi(s,ans,pos+1);
            
            swap(s[i], s[pos]);
            
        }
        
    }
    
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string> ans;
        risolvi(S,ans,0);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends