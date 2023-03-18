//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int N)
    {
        // code here
        long long ans = 0;
        long long conta = 1;
        
        for (int i=0; i<N; i++)        
        {
            long long temp = 1;
            for (int j=0; j<i+1; j++)
            {
                //cout << conta << " ";
                temp *= conta;
                conta++;
            }
            //cout << endl;
            ans += temp;
        }
        
        return ans;
        
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
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends