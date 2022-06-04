 
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends

class Solution
{
  public:
    void rearrangeArray(int arr[], int n)
    {
        // code here
        vector<int> uno;
        vector<int> due;
        
        for (int i=0; i<n; i++)
        {
            uno.push_back(arr[i]);
            due.push_back(arr[i]);
        }
        
        sort(uno.begin(), uno.end());
        sort(due.begin(), due.end());
        
        reverse(due.begin(), due.end());
        
        int conta = 0;
        for (int i=0; i<n/2; i++)
        {
            arr[conta] = uno[i];
            conta++;
            
            arr[conta] = due[i];
            conta++;
        }
        
        if (n%2 !=0) arr[n-1] = uno[n/2];
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.rearrangeArray(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends