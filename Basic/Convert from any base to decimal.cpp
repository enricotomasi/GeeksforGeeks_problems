//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int decimalEquivalent(string N, int b)
    {
        // code here
        int ans = 0;
        int fattore = N.length()-1;
        
        for (int i=0; i<N.length(); i++)
        {
            int digit = 0;
            char c = N.at(i);
            string s ="";
            s+= c;
            
            if (c == 'A') digit = 10;
            else if (c == 'B') digit = 11;
            else if (c == 'C') digit = 12;
            else if (c == 'D') digit = 13;
            else if (c == 'E') digit = 14;
            else if (c == 'F') digit = 15;
            else digit = stoi(s);
            
            if (digit > b) return -1;

            ans += pow(b, fattore) * digit;
            fattore--;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int b;
        cin>>b;
        string N;
        cin>>N;
        
        Solution ob;
        cout<<ob.decimalEquivalent(N, b)<<"\n";
    }
    return 0;
}
// } Driver Code Ends