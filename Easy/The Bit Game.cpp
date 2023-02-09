//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
public:
    int swapBitGame(long long N)
    {
        // code here 
        long long setbit = 0;
        
        while (N)
        {
            if (N%2 == 1) setbit++;
            N/=2;
        }
        
        if (setbit %2 != 0) return 1;
        return 2;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.swapBitGame(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends