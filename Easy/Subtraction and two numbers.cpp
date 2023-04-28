//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:
    int repeatedSubtraction(int A,int B)
    {
        //code here
        if (A == B) return 1;
        
        int ans = 0;
        while (true)
        {
            if (A > B)
            {
                A -= B;
            }
            else
            {
                B -= A;
            }
            ans++;
            
            if (A <= 0 || B <= 0) break;
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A,B;
        cin>>A>>B;
        Solution ob;
        cout<<ob.repeatedSubtraction(A,B)<<"\n";
    }
}
// } Driver Code Ends