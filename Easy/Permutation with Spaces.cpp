//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void risolvi(vector<string>& ans, int pos,string& S, string SS)
    {
        if(pos>=S.size())
        {
            if(SS[SS.size()-1] != ' ') ans.push_back(SS);
            return;
        }
        risolvi(ans, pos+1, S,SS+S[pos] + " ");
        risolvi(ans, pos+1 ,S,SS+S[pos]);
   }
        
    vector<string> permutation(string S)
    {
        // Code Here
        vector<string>ans;
        risolvi(ans, 0, S, "");
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends