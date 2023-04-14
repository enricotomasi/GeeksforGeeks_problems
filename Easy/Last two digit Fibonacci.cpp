//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    int fibonacciDigits(long long N)
    {
        //code here
        int fibo[300];
        
        fibo[0] = 0;
        fibo[1] = 1;
        fibo[2] = 1;
        
        for (int i=3; i<300; i++)
        {
            fibo[i] = (fibo[i-1] + fibo[i-2]) %100; 
        }
        
        int ans = fibo[abs(N%300)];
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        long long N;
        cin>>N;
        Solution ob;
        int ans=ob.fibonacciDigits(N);
        if(ans/10)
         cout<<ans;
        else
         cout<<0<<ans;
        cout<<"\n";  
    }
}
// } Driver Code Ends