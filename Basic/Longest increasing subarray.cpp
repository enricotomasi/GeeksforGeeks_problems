// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    long int lenOfLongIncSubArr(long int arr[], long int n)
    {
        if (n<=1) return 1;
        
        int ans = 0;
        int temp = 1;
        
        for (int i=0; i<n-1; i++)
        {
            int precedente = arr[i];
            int attuale = arr[i+1];
            
            if (precedente >= attuale)
            {
                ans = max(ans, temp);
                temp = 1;
            }
            else
            {
                temp++;
            }
            
            ans = max(ans, temp);
        }
        
        
            
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long int n;
        cin >> n;
        long int arr[n], i;
        for (i = 0; i < n; i++) 
            cin >> arr[i];
        Solution obj;
        cout << obj.lenOfLongIncSubArr(arr, n) << endl;
    }
    return 0;
}  // } Driver Code Ends