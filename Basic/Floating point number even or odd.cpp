//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
bool isEven(string s,int n);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if (isEven(s,n))
           cout << "EVEN\n";
        else
           cout << "ODD\n";
        
    }
    return 0;
}
// } Driver Code Ends


bool isEven(string s,int n)
{
    // code here.
    for (int i=n-1; i>=0; i--)
    {
        if (s.at(i) == '0' || s.at(i) == '.') continue;
        int digit = stoi(to_string(s.at(i)));
        return !(digit % 2);
    }
    
    return true;
    
}