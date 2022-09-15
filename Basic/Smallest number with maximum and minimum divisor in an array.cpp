//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    int getNum(int arr[] , int N)
    {
        // code here
        
        int low = INT_MAX;
        int high = INT_MIN;
        
        for (int i=0; i<N; i++)
        {
            low = min(low, arr[i]);
            high = max(high, arr[i]);
        }
    
        int i=1;
        while (true)
        {
            if (i%low == 0 && i%high == 0) return i;
            i++;
        }
        
        
        
        
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
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.getNum(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends