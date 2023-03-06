//{ Driver Code Starts
// Initial function Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:

    long int disarrange(int N)
    {
        // code here
        long int m = 1000000007;
        
        long int a = 0;
        long int b = 1;
        
        for (int i=3; i<=N; i++)
        {
            int c = ((a%m + b%m)%m *(i-1)%m)%m;
            
            a = b;
            b = c;
        }
     
        return b;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.disarrange(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends