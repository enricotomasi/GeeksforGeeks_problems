// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    bool checkIsAP(int arr[], int n)
    {
        // code here
        vector<int> a = { };
        
        for (int i=0; i<n; i++)
        {
            a.push_back(arr[i]);
        }
        
        sort (a.begin(), a.end());
        
        int diff = a[1] - a[0];
        for (int i=2; i<n; i++)
        {
            if ((a[i] - a[i-1]) != diff) return false;
        }
        
        return true;
    }

};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
         (ob.checkIsAP(arr, n))? (cout << "YES" << endl) :
                       (cout << "NO" << endl);   
    }
 
  return 0;
}
  // } Driver Code Ends