//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<string> pattern(int n)
    {
        // code here
        vector<string> ans;
        
        int inizio = 1;
        int fine = n * (n+1);
        
        for (int i=0; i<n; i++)
        {
            string riga = "";
            
            for (int j=0; j< i*2; j++) riga += "-";
            
            for (int j=0; j<n-i; j++) riga += to_string(inizio++) + "*";
            
            string temp = "";
            for (int j=0; j<n-i; j++) temp = to_string(fine--) + "*" + temp;
          
            riga += temp;
            
            ans.push_back(riga.substr(0, riga.length()-1));
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<string> ans = ob.pattern(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<"\n";
    }
    return 0;
}
// } Driver Code Ends