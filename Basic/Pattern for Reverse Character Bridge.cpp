//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
  public:
    vector<string> revCharBridge(int N)
    {
        // code here
        vector <string> ans;
        int i = 0;
        string stringa1 = "";
        
        for (i=0; i<N; i++)
        {
            stringa1 += (char)((int)'A'+i);
        }
        
        string stringa2 = stringa1.substr(0,N-1);
        reverse(stringa2.begin(), stringa2.end());
        string stringa = stringa1 + stringa2;
        
        ans.push_back(stringa);
        
        stringa[N-1] = ' ';
        ans.push_back(stringa);
        
        N--;
        i=0;
        int NORI = N+1;
        while (N>1)
        {
            stringa[N-1] = ' ';
            stringa[NORI] = ' ';
            ans.push_back(stringa);
            N--;
            NORI++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<string> v = ob.revCharBridge(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends