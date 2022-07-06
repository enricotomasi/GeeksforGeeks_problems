// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    long long nearestPowerOf2(long long N)
    {
        //code here
        if (N == 1) return N;
        
        int loga = log(N)/log(2);
        
        if (pow(2,loga) == N) return N;
        
        return pow(2,loga+1);
         
       
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        cout<<ob.nearestPowerOf2(N)<<"\n";
    }
}  // } Driver Code Ends