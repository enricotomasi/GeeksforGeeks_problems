//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    vector<int> compute(int arr[], int n)
    {
        // Complete the function
        unordered_map<int, int> mappa;
        
        for (int i=0; i<n; i++)
        {
            mappa[arr[i]]++;
        }
        
        int soglia = floor(n/3);
        vector<int> ans;
        
        for (auto it: mappa)
        {
            if (it.second > soglia)
            {
                ans.push_back(it.first);
            }
        }
        
        sort(ans.begin(), ans.end());
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        
        vector<int> v;
        Solution ob;
        v = ob.compute(arr, n);
        if(v.size()==0)
            v.push_back(-1);
        for(int i:v)
            cout << i << " ";
        
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends