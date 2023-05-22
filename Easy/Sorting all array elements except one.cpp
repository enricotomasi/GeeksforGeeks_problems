//{ Driver Code Starts
// CPP program to sort all elements except
// element at index k.
#include <bits/stdc++.h>
using namespace std;

int* sortExceptK(int arr[], int n, int k);


// Driver code
int main()
{
	int t,k,n;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        int *ans;
        ans = sortExceptK(arr, n, k);
    	for (int i = 0; i < n; i++)
    		cout << ans[i] << " ";
		cout<<endl;
    }

}

// } Driver Code Ends


int* sortExceptK(int arr[], int n, int k)
{
	// Complete the function
	
	vector<int> copia;
	for (int i=0; i<n; i++)
	{
	    if (i != k) copia.push_back(arr[i]);
	}
	
	sort (copia.begin(), copia.end());
	
	int j = 0;
	for (int i=0; i<n; i++)
	{
	    if (i !=k)
	    {
	        arr[i] = copia[j];
	        j++;
	    }
	    
	}

	return arr;
}
