//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    long long int minIncrements(vector<int> arr, int N) 
    {
        // Code here
        sort(arr.begin(), arr.end());
        map<int,long long int> mappa;
        long long int ans = 0;
        long long int massimo = 0;
        
        for (int i=0; i<N; i++)
        {
            if (massimo < arr[i]) massimo = arr[i];
            else 
            {
                massimo++;
                ans += massimo-arr[i];
            }
        }
        
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minIncrements(arr, N) << endl;
    }
}
// } Driver Code Ends