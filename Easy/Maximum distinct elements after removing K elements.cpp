//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    

    int maxDistinctNum(int arr[], int n, int k)
    {
    	// Complete the function
        unordered_map<int,int> mappa;
        vector<int> v;
        int i = 0;
        
        while (i < n)
        {
           mappa[arr[i]]++;
        
           if (mappa[arr[i]] == 1) v.push_back(arr[i]);
           if (mappa[arr[i]] > 1 && k > 0) k--;
           
           if (k==0) break;
           i++;
        }
        
        if (i < n-1)
        {
            for (int j = i + 1; j < n; j++) v.push_back(arr[j]);
        }
        
        set<int> mappa2;
        for (int j=0; j<v.size(); j++) mappa2.insert(v[j]);
        
        return mappa2.size() - k;
    
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,i,k;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	Solution ob;
	cout <<ob.maxDistinctNum(arr, n, k)<<"\n";
	  }
	return 0;
}

// } Driver Code Ends