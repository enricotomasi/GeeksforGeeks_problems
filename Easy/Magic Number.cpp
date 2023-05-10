//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    long long int nthMagicNo(int n) 
    { 
        //complete the function here
        long long int m = 1000000007;
        long long int ans = 0;
        long long int temp = 1;
        
        while (n)
        {
            temp = temp * 5;
            
            if (n % 2 != 0) ans = (ans + temp) %m;
            
            n /=2;
        }
        
        return ans %m;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthMagicNo(n) << endl;
    
    }
    return 0; 
} 
// } Driver Code Ends