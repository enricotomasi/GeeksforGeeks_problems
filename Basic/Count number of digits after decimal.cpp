//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int countDecimal(int A, int B)
    {
        // code here
        int ans = 0;
        unordered_map<int,int> mappa;
        
        while (A%B != 0)
        {
            A%=B;
            ans++;
            if (mappa.find(A) != mappa.end()) return -1;
            mappa[A] = 1;
            A*=10;
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A, B;
        cin>>A>>B;
        
        Solution ob;
        cout<<ob.countDecimal(A, B)<<"\n";
    }
    return 0;
}
// } Driver Code Ends