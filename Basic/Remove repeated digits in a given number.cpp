//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

long long int modify (long long int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n; cin >> n;
        cout << modify (n) << endl;
    }
    return 0;
}
// Contributed By: Pranay Bansal

// } Driver Code Ends



long long int modify (long long int N)
{
    // your code here
    string s = to_string(N);
    
    char last = '!';
    
    string res = "";
    for (char c : s)
    {
        if (c!= last)
        {
            res += c;
        }
        last = c;
    }
    
    long long int ans = stoll(res);
    return ans;
    
}