//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
  public:
    int getTwinCount(int N , int Arr[]) 
    {
        // code here
        
        unordered_map<int, int> mappa;
        
        for (int i=0; i<N; i++)
        {
            mappa[Arr[i]]++;
        }
        
        int ans = 0;
        
        for (auto it : mappa)
        {
            ans += floor(it.second/2) *2;
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
        
        cin>>N;
        int Arr[N];
        for(int i=0 ; i<N ; i++)
            cin>>Arr[i];

        Solution ob;
        cout << ob.getTwinCount(N,Arr) << endl;
    }
    return 0;
}
// } Driver Code Ends