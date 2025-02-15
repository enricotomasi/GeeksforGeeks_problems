//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int maxValue(int A, int B)
    {
        // code here
        int a = 0;
        int b = 0;
        int c = 0; 
        int d = 0;
        
        try
        {
            if (B == 0) throw 69;
            else
            {
                a = A+B;
                b = A-B;
                c = A*B;
                d = A/B;
            }
        }
        catch (int p)
        {
            return -999999;
        }
        
        return max(a, max(b, max(c, d)));
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B;
        cin>>A>>B;
        
        Solution ob;
        int ans = ob.maxValue(A,B);
        if(ans == -999999)
            cout<<"inf\n";
        else
            cout<<ans<<"\n";
    }
    return 0;
}
// } Driver Code Ends