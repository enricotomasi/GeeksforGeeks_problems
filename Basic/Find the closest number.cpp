
// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    int findClosest(int arr[], int n, int target) 
    { 
        // Complete the function
        
        int minDiff = INT_MAX;
        for (int i=0; i<n; i++)
        {
            minDiff = min(minDiff, abs(target-arr[i]));
        }
        
        int ans = INT_MIN;
        for (int i=0; i<n; i++)
        {
            if (abs(target-arr[i]) == minDiff)
            {
                ans = max(ans, arr[i]);
            }
        }
        
        return ans;
        
    } 
};

// { Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}
  // } Driver Code Ends