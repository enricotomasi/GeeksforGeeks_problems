//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int common_divisor(int a, int b);

int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        cout << common_divisor(a, b) << endl;
        
    }
    
	return 0;
}
// } Driver Code Ends


int common_divisor(int a, int b)
{
    // Complete the function
    int ans = 0;
    int m = max(a, b);
    
    while (m)
    {
        if (a % m == 0 && b % m == 0)
        {
            ans++;
        }
        m--;
    }
    
    return ans;
}
