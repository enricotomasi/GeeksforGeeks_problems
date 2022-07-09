// { Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution
{   
public:
    int DifferOne(long int a, long int b)
    { 
        //complete the function here
        int conta = 0;
        
        for (int i=0; i<32; i++)
        {
            if (((1<<i) &a) != ((1<<i) &b )) conta++;
            if (conta >1) return 0;
        }
        
        if (conta != 1) return 0;
        return 1;
    }
};

// { Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int a, b;
        cin >> a >> b;
        Solution ob;
        cout << ob.DifferOne(a, b) << endl;
    
    }
    return 0; 
} 
  // } Driver Code Ends