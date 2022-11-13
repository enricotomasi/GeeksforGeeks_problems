//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n)
    {
        //complete the function here
        if (n <= 0) return -1;
        if (n == 1) return arr[0];
        if (n == 2) return min(arr[0], arr[1]);
        
        bool asc = true;
        int last = arr[0];
        int m = arr[0];
        if (arr[0] > arr[1])
        {
            asc = false;
        }
    
        for (int i=1; i<n; i++)
        {
            if (asc)
            {
                if (arr[i] < last) return arr[i];
            }
            else
            {
                if (arr[i] > last) return m;
                m = min(m, arr[i]);
            }
            last = arr[i];
        }
        
        return arr[0];
        
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends