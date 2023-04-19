//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int nthTerm(int n)
    {
        // code here
        // (n-1) * 2 + i-1
        
        int m = 1000000007;
        
        long long int last = 7;
        long long int valore;
        
        for (int i=1; i<n; i++)
        {
            valore = ((last *2 ) %m + i)%m;
            //cout << valore << endl;
            last = valore;
        }
        
        return (int)valore % m;
        
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
        cout<<ob.nthTerm(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends