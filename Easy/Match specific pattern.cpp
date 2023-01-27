//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];
		
		string tt;
		cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;
		
	}
}
// } Driver Code Ends


/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */

string cod(string s)
{
    int n = s.length();
    int mappa[256] = {};
    string ans = "";
    int conta = 0;
    
    for (int i=0; i<n; i++)
    {
        if (mappa[s[i]] != 0)
        {
            ans += to_string(mappa[s[i]]);
        }
        else
        {
            conta++;
            ans += to_string(conta);
            mappa[s[i]] = conta;
        }
    }
    
    return ans;
}

vector<string> findMatchedWords(vector<string> dict, string pattern)
{
    //Your code here
    vector<string> ans;
    string pattCod = cod(pattern);
    
    int n = dict.size();
    
    for (int i=0; i<n; i++)
    {
        string c = cod(dict[i]);
        if (c == pattCod) ans.push_back(dict[i]);
    }
    
    return ans;
}