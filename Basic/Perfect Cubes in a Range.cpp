//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> properCubes(int a, int b)
    {
        // code here
        vector<int> ans;
        
        for (int i=a; i<=b; i++)
        {
            for (int j=1; j*j*j<=i; j++)
            {
                if (j*j*j == i) ans.push_back(j*j*j);
            }
        }
        
        
        if (ans.size()==0) ans.push_back(-1);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        
        Solution ob;
        vector<int> v = ob.properCubes(a, b);
        if(v.size() == 1 && v[0] == -1)
            cout<<"No\n";
        else{
            for(int u: v)
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends