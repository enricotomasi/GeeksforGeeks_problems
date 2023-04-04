//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
        
    int findGreatest(int arr[], int n)
    {
        // Your code goes here   
        int ans = -1;
        
        unordered_map <int,int> mappa;
        for (int i=0; i<n; i++) mappa[arr[i]]++;
        
        for (int i=0; i<n; i++)
        {
            if (mappa[1] > 0 && mappa[arr[i]] > 1)   
            {
                ans = max(ans, arr[i]);
                continue;
            }
            for (int j=2; j*j<=arr[i]; j++)
            {
                if (mappa[j] > 0 && arr[i]%j == 0 && mappa[arr[i]/j] > 0)
                {
                    if (j == arr[i] / j && mappa[j] < 2) continue;
                    
                    ans = max(ans, arr[i]);
                    break;
                }
            }
        }
    
        return ans;
    }
};

//{ Driver Code Starts.

// Drivers code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.findGreatest(a,n)<<endl;
    }
}

// } Driver Code Ends