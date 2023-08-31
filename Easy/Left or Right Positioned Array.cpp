//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    bool leftRight(int arr[],int n)
    {
        // Your code goes here
        int mappa[n];
        
        for (int i=0; i<n; i++) mappa[i] =- 1;
            
        for (int i=0; i<n; i++)
        {
            if (arr[i] >= n)
                return 0;
                
            if      (mappa[arr[i]] == -1)       mappa[arr[i]] = arr[i];
            else if (mappa[n-arr[i] - 1] == -1) mappa[n - arr[i] - 1] = arr[i];
            else return 0;
            
        }
        
        return 1;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+5];
		for(int i=0;i<n;i++)
			cin>>a[i];
		Solution ob;
		cout<<ob.leftRight(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends