//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int findX(int A, int B)
    {
        // code here
        for (int x=1; x<=B; x++)
        {
            int ax1 = (A * x) - 1;
            
            if (ax1 % B == 0)
            {
                return x;    
            }
        }
        
        return -1;
        
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
        cout<<ob.findX(A, B)<<"\n";
    }
    return 0;
}
// } Driver Code Ends