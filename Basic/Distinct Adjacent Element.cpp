//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	bool distinctAdjacentElement(int arr[], int n) 
	{ 
	    // Your code goes here
        unordered_map<int, int> mappa;
        for(int i = 0; i<n; i++)
        {
            mappa[arr[i]]++;
        }
        
        for(auto i : mappa)
        {
            if(i.second > (n+1)/2) return false;
        }
        
        return true;
	} 
};

//{ Driver Code Starts.
int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	        cin >> arr[i];
        Solution ob;
        if(ob.distinctAdjacentElement(arr,n))
            cout<<"YES";
        else
            cout<<"NO";
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends