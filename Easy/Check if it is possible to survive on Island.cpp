//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int minimumDays(int S, int N, int M)
    {
        // code here
        int ciborichiesto = S*M;
        int media = S-(S/7);
        
        int cibodisponibile = media * N;
        
        if (ciborichiesto > cibodisponibile) return -1;
        
        double temp = (double)ciborichiesto / (double)N;
        
        return ceil(temp);
        
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int S, N, M;
        cin>> S >> N >> M;
        
        Solution ob;
        cout<<ob.minimumDays(S, N, M)<<endl;
    }
    return 0;
}
// } Driver Code Ends