//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long int invertBits(long long int N)
    { 
        //code here
        bitset<32>bs(N);
        
        bs.flip();
        
        return bs.to_ulong();
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
        cout<<ob.invertBits(N)<<"\n";
	}
} 
// } Driver Code Ends