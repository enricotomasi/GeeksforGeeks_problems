//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution{
public:
    int isPossible(int A, int B, int C)
    {
        // code here
        // Ax + By = C
        
        // Hint:
        // The solution is only possible for Diophantine Equation is C is divisible by GCD(A, B).
        
        return C% __gcd(A,B) == 0;
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,N;
        cin>>A>>B>>N;
        Solution ob;
        cout << ob.isPossible(A,B,N) << endl;
    }
    return 0; 
}
// } Driver Code Ends