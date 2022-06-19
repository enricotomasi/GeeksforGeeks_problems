// { Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}
// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x)
{
    // code here
    int ce = INT_MAX;
    int fl = INT_MAX;
    
    int ceN = -1;
    int flN = -1;
    
    for (int i=0; i<n; i++)
    {
        int elem = arr[i];
        if (elem == x) 
        {
            ceN = elem;
            flN = elem;
            break;
        }
        
        if (elem > x)
        {
            if (elem-x <= ce)
            {
                ce = elem-x;
                ceN = elem;
            }
        }
        else
        {
            if (x-elem <= fl)
            {
                fl = x-elem;
                flN = elem;
            }
        }
    }
    
    pair<int,int> ans = {flN,ceN};
    
    return ans;
    
}