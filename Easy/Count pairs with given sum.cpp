//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k)
    {
        // code here
        
        // Create a map to store frequency of each number in the array. (Single traversal is required)
        // For every element check if it can be combined with any other element (other than itself!)
        // to give the desired sum. Increment the counter accordingly. After completion of second traversal,
        // we’d have twice the required value stored in counter because every pair is counted two times. 
        // Also take care of pairs with duplicate elements like (2,2) when K =4.
        
        int ans = 0;
        unordered_map<int,int> mappa;
        
        for (int i=0; i<n; i++)
        {
            int temp = k-arr[i];
            if (mappa[temp])
            {
                ans += mappa[temp];
            }
            mappa[arr[i]]++;
            
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends