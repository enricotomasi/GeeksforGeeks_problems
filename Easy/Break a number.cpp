//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{   
public:
    int waysToBreakNumber(int N)
    {
        // code here 
        int m = pow(10,9) +7;
        
        long long int temp = (N+1)%m;
        temp = ((temp%m) * (N+2)%m)%m;
        temp /=2;
        temp %= m;
        
        return (int)temp;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.waysToBreakNumber(N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends