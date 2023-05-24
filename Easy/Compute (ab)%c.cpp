//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

//User function Template for C++

class Solution
{   
public:
    long long mulMod(long long a, long long b, long long c)
    {
        //complete the function here
        long long am = a % c;
        long long bm = b % c;
        
        return (am * bm) % c;
        
        
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        cout << ob.mulMod(a, b, c) << endl;
    
    }
    return 0; 
} 

// } Driver Code Ends