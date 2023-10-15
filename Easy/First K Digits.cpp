//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    string Kdigits(int n, int k)
    { 
        //complete the function here
        
        string ans = "";
        int resto = 1; 
        
        for (int i = 0; i < k; i++)
        { 
             int temp = (resto * 10) / n; 
             char c = '0' + temp;
             ans += c;
            
             resto = (resto * 10) % n; 
       }
       
       return ans; 
        
        
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        Solution ob;
        cout << ob.Kdigits(n, k) << endl;
    
    }
    return 0; 
} 

// } Driver Code Ends