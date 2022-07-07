// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends
class Solution{
public:
    int onesComplement(int N)
    {
        //code here
        int bit = floor(log2(N))+1;
        int uni = (1 << bit) -1;
        
        return uni ^N;
        
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        Solution ob;
        cout<<ob.onesComplement(n)<<"\n";
    }
}  // } Driver Code Ends