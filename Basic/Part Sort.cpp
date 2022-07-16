//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:		
	
	void partSort(vector<int> &arr, int n, int l, int r)
	{
	    // Your code goes here
	    vector<int> parziale;
	    
	    if (l>r)
	    {
	        int temp = l;
	        l = r;
	        r = temp;
	    }
	    
	    for (int i=l; i<=r; i++)
	    {
	        parziale.push_back(arr[i]);
	    }
	    
	    sort(parziale.begin(), parziale.end());
	    
	    int j=0;
	    for (int i=l; i<=r; i++)
	    {
	        arr[i] = parziale[j];
	        j++;
	    }
	    
	}
};

//{ Driver Code Starts.


int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        int l, r;
        cin >> l >> r;

        Solution ob;

        ob.partSort(arr, n, l, r);

        for(int i = 0; i < n; i++)
        	cout << arr[i] << " ";

        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends