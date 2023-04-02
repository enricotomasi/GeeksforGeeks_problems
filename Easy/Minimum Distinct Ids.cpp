//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    static bool cmp(pair<int, int>& a, pair<int, int>& b)
    {
        return a.second < b.second;
    }
    
    int distinctIds(int arr[], int n, int m)
    {
        // Complete this function
        unordered_map<int,int> mappa;
        
        for (int i=0; i<n; i++)
        {
            mappa[arr[i]]++;
        }
        
        vector<pair<int, int>> mappa2;
        
        for (auto it : mappa)
        {
            mappa2.push_back(it);
        }
        
        sort(mappa2.begin(), mappa2.end(), cmp);
        
        int ans = 0;
        
        for (auto it : mappa2)
        {
            if (m)
            {
                if (it.second <= m) m -= it.second;
                else
                {
                    m = 0;
                    ans++;
                }
            }
            else
            {
                ans++;
            }
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
          cin>>arr[i];
        }
    
    	int m ;
    	cin >> m;
        Solution ob;
    	cout << ob.distinctIds(arr, n, m) << endl;
    }
	return 0;
}
// } Driver Code Ends