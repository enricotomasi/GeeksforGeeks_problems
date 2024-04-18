//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
public:
    int findMidSum(int ar1[], int ar2[], int n)
    {
        // code here 
        int arr[n * 2];
        for (int i = 0; i < n; i++)
        {
            arr[i] = ar1[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            arr[n + i] = ar2[i];
        }
        
        sort(arr, arr + (n * 2));
        
        //for (int i = 0; i < n * 2; i++) cout << arr[i] << " ";
        
        //cout << endl;
        
        int ans = arr[n - 1] + arr[n];
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
