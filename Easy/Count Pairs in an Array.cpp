//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    int merge(int arr[], int temp[], int l, int m, int r)
    {
        int ans = 0;
        int i = l;
        int j = m;
        int k = l;
        
        while ((i <= m - 1) && (j <= r))
        {
            if (arr[i] <= arr[j]) temp[k++] = arr[i++];
            else
            {
                temp[k++] = arr[j++];
                ans += m - i;
            }
        }
        
        while (i <= m - 1) temp[k++] = arr[i++];
        while (j <= r)     temp[k++] = arr[j++];
        
        for (i=l; i <= r; i++) arr[i] = temp[i];
        
        return ans;
    }

    int mergesort(int arr[], int temp[], int l, int r)
    {
        int m = 0;
        int ans = 0;
        if (r > l)
        {
            m = (r + l)/2;
            ans =  mergesort(arr, temp, l, m);
            ans += mergesort(arr, temp, m+1, r);
            ans += merge(arr, temp, l, m+1, r);
        }
        
        return ans;
    }
    
    int countPairs(int arr[], int n) 
    {
        // Your code goes here   
        for (int i=0; i<n; i++) arr[i] *=i;
        int temp[n]; 
        return mergesort(arr, temp, 0, n-1);
        
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	Solution ob;
    	cout<<ob.countPairs(a, n)<<endl;
    }
}
// } Driver Code Ends