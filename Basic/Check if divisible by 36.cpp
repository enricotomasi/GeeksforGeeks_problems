//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    int checkDivisible36(string S)
    {
        // code here 
        int n = S.length();
        int u2 = (S.at(n-2) - '0') * 10 + (S.at(n-1));
        
        int somma = 0;
        
        for (int i=0; i<n; i++)
        {
            somma += S.at(i) - '0';
        }
       
       
       if (u2 %4 == 0 && somma%9 == 0) return 1;
       
       return 0;
       
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.checkDivisible36(S) << endl;
    }
    return 0; 
} 
// } Driver Code Ends