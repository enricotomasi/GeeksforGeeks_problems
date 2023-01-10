//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    void ric (string stringa, set<string> &permutazioni, int l, int r)
    {
        if (l == r) return;
        
        for (int i=l; i<=r; i++)
        {
            swap(stringa[l], stringa[i]);
            permutazioni.insert(stringa);
            ric (stringa, permutazioni, l+1, r);
            swap(stringa[l], stringa[i]);
        }
    }
    
    int findNext (int N) 
    {
        //code here.
        string stringa = to_string(N);
        set<string> permutazioni;
        ric(stringa, permutazioni, 0, stringa.length()-1);
        
        vector<int> perm;
        for (auto it: permutazioni)
        {
            perm.push_back(stoi(it));
        }
        
        sort (perm.begin(), perm.end());
        
        int n = perm.size();
        int i = 0;
        
        while (perm[i] != N) i++;
        
        if (i==n-1) return -1;
        
        return perm[i+1];
    }  
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n; cin >> n;
		Solution ob;
		int res = ob.findNext (n);
		if (res == -1)
		    cout << "not possible";
		else
		    cout << res;
		cout << endl; 
	}
}
// } Driver Code Ends