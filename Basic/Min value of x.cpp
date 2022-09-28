//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    int minX(int a, int b, int c, long int k)
    {
        //complete the function here
        
        int x = 0;
        while (true)
        {
            int eq = (a*x*x) + (b*x) + c;
            if (eq >= k) return x;
            x++;
        }
        
        return -1;
        
        
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c;
        long k;
        
        cin >> a >> b >> c >> k;
        Solution ob;
        cout << ob.minX(a, b, c, k) << endl;
    
    }
    return 0; 
} 

// } Driver Code Ends