 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int N)
	{
	    // Your code goes here
	    vector<int> a;
	    vector<int> b;
	    vector<int> ans;
	    
	    for (int i=0; i<N; i++)
	    {
	        a.push_back(arr[i]);
	        b.push_back(arr[i]);
	    }
	    
	    
	    sort(a.begin(), a.end());
	    sort(b.begin(), b.end());
	    
	    reverse(b.begin(), b.end());
	    
	    int i=0;
	    for (int i=0; i<N/2; i++)
	    {
	        ans.push_back(b[i]);
	        ans.push_back(a[i]);
	    }
	    
	    if (N%2!=0) ans.push_back(b[N/2]);
	    
	    
	    return ans;
	}

};
	

// { Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends