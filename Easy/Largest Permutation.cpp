//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    void KswapPermutation(int arr[], int n, int k)
    {
        unordered_map<int,int> mappa;
        
        for (int i = 0; i<n; i++)
        {
            mappa[arr[i]] = i;
        }
        
        int i = 0;
        int j = n;

        while (k > 0 && i < n)
        {
            if (arr[i] != j)
            {
                mappa[arr[i]] = mappa[j];
                swap(arr[i], arr[mappa[j]]);
                mappa[j] = i;
                k--;
            }
            
            i++;
            j--;
        }
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;++i)
			cin>>arr[i];
		Solution ob;
		ob.KswapPermutation(arr,n,k);
		for(int i=0;i<n;++i)
			cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}


// } Driver Code Ends