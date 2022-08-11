//{ Driver Code Starts


#include <bits/stdc++.h>

using namespace std;

vector<int> getFreq(int x, int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;
        auto ans = getFreq(x, n);
        for (auto &x: ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends

vector<int> getFreq(int x, int n)
{
    // code here
    int mappa[10] = { };
    
    long long int potenza = 1;
    
    for (int i=1; i<=n; i++)
    {
        potenza *=x;
        long long int temp = potenza;
        while (temp)
        {
            int digit = temp%10;
            mappa[digit]++;
            temp /=10;
        }
    }
    
    vector<int> ans;
    for (int i=0; i<10; i++)
    {
        ans.push_back(mappa[i]);
    }
    
    return ans;
    
}