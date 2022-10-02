//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution 
{
  public:
    vector<int> complexProduct(int A[], int B[])
    {
        // code here
        vector<int> ans;
        
        int reale = A[0];
        int immaginario = B[0];
        
        for (int i=1; i<5; i++)
        {
            int temp = reale;
            reale = (reale*A[i]) - (immaginario*B[i]);
            immaginario = (temp*B[i]) + (immaginario*A[i]);
        }
        
        ans.push_back(reale);
        ans.push_back(immaginario);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A[5], B[5];
        for(int i=0; i<5; i++)
            cin>>A[i];
        for(int i=0; i<5; i++)
            cin>>B[i];

        Solution ob;
        vector<int> ptr = ob.complexProduct(A,B);
        cout<<ptr[0]<<" "<<ptr[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends