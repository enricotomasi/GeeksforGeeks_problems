//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int longestPerfectPiece(int arr[], int N)
    {
        // code here
        multiset<int> mappa;
        int temp = 0;
        int ans = 0;
        
        for (int i=0; i<N; i++)
        {
            mappa.insert(arr[i]);
            while (temp < N && !mappa.empty() && *mappa.rbegin() - *mappa.begin() > 1) mappa.erase(arr[temp++]);
            ans = max(ans, i-temp+1);
        }
        
        while(temp < N && !mappa.empty() && *mappa.rbegin() - *mappa.begin() > 1)  mappa.erase(arr[temp++]);
        
        ans = max(ans, N-temp);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends