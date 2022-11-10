//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution
{
  public:
    int maxLen(int arr[], int N)
    {
        int ans = 0;
        int temp = 0;
        unordered_map<int,int> mappa;
        
        for(int i=0;i<N;i++)
        {
            temp+=(arr[i]==1)?1:-1; 
            if (temp == 0) ans=i+1;
            
            if (mappa.find(temp) == mappa.end()) mappa.insert({temp,i});
            else                                 ans=max(ans, i-mappa[temp]);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends