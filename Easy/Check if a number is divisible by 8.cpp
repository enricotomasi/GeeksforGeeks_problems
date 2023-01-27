//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int DivisibleByEight(string S)
    {
        //code here
        int n = S.length();
        
        if (n<3)
        {
            int numero = stoi(S);
            return (numero % 8 == 0 ? 1 : -1);
        }
        
        string ultimeTre = S.substr(n-3, 3);
        int numero = stoi(ultimeTre);
        return (numero % 8 == 0 ? 1 : -1);
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
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends