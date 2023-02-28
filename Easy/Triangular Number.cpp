//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    int isTriangular(int N)
    {
        //code here
        if (N == 1) return 1;
        
        int tri = 1;
        int i = 2;
        
        while (true)
        {
            tri += i;
            
            if (tri == N) return 1;
            else if (tri > N) return 0;
            
            i++;
        }
        
        return -1;
        
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
        cout<<ob.isTriangular(N)<<"\n";
    }
}
// } Driver Code Ends