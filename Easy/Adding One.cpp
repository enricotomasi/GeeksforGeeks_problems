//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> addOne(int a[], int n)
    {
        // code here
        stack<int> pila;
        
        int toAdd = 1;
        
        for (int i=n-1; i>=0; i--)
        {
            int digit = a[i] + toAdd;
            toAdd = 0;
            
            if (digit > 9)
            {
                digit = 0;
                toAdd = 1;
            }
            
            pila.push(digit);
            
        }
        
        if (toAdd > 0) pila.push(toAdd);
        
        vector<int> ans;
        
        while (!pila.empty())
        {
            ans.push_back(pila.top());
            pila.pop();
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.addOne(a, n);
        printAns(ans);
    }
    return 0;
}
// } Driver Code Ends