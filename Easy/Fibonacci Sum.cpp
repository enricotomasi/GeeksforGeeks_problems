//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    long long int fibSum(long long int N)
    {
        //code here
        int M = 1000000007;
        long long int ans = 1;
        
        long long int a = 0;
        long long int b = 1;
        long long int fibo = 0;
        
        for (int i=0; i<N-1; i++)
        {
            fibo = (a+b)%M;
            a = b;
            b = fibo;
            
            ans = (ans + fibo) %M;
        }
        
        return ans %M;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends