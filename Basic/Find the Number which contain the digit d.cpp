//{ Driver Code Starts
// CPP program to print the number which
// contain the digit d from 0 to n
#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int n, int d);


int main() {
    int t, n, d;
    cin >> t;
    while (t--) {
        cin >> n >> d;
        vector<int> v = solve(n, d);
        for (auto it : v) cout << it << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends


vector<int> solve(int n, int d)
{
    //code here
    vector<int> ans;
    
    for (int i=0; i<=n; i++)
    {
        int temp =i;
        bool ok = false;
        while (temp)
        {
            if ((temp%10) == d)
            {
                ok = true;
                break;   
            }
            temp/=10;
        }
        
        if (ok || (i<9 && i==d)) ans.push_back(i);
        
    }
    
    if (ans.size() < 1) ans.push_back(-1);
    
    return ans;
}