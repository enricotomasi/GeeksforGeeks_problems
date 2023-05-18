//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int fun(string s);

int main() {
    int tt;
    string s;
    cin >> tt;
    while (tt--) {
        cin >> s;
        cout<<fun(s)<<endl;
        
    }
    return 0;
}
// } Driver Code Ends


int fun(string s)
{
    //code here
    int n = s.length();
    set<string> mappa;
    
    for (int i=0; i<n-1; i++)
    {
        string temp = s.substr(i,2);
        //cout << temp << " ";
        mappa.insert(temp);
    }
    
    //for (auto it : mappa) cout << it << " ";
    
    //cout << endl;
    
    return mappa.size();
}