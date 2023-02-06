//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    vector<int> findFibSubset(int arr[], int n)
    {
        vector<int> ans;
        
        if (n <=0) return ans;
        
        int massimo = INT_MIN;
        for (int i=0; i<n; i++)
        {
            massimo = max(massimo, arr[i]);    
        }
        
        int a = 0;
        int b = 1;
        int fibo = 1;
        
        unordered_set<int> fibi;
        
        while (fibo <= massimo)
        {
            fibo = a+b;
            fibi.insert(fibo);
            
            b = a;
            a = fibo;
        }
        
        for (int i=0; i<n; i++)
        {
            auto temp = fibi.find(arr[i]);
            if (temp != fibi.end()) ans.push_back(arr[i]);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        vector<int> answer = ob.findFibSubset(a, n);
        for (int i = 0; i < answer.size(); i++) {
            cout << answer[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends