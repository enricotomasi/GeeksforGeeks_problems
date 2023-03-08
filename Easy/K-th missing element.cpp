//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int KthMissingElement(int a[], int n, int k);


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << KthMissingElement(a, n, k) << endl;
    
    }
    return 0;
}

// } Driver Code Ends


int KthMissingElement(int a[], int n, int k)
{
    // Complete the function
    int i=0;
    int j=a[0];
    
    while (i < n)
    {
        // cout << a[i] << " " << j << endl;
        if (a[i] != j)
        {
            if (k == 1) return j;    
            else k--;
        }
        else i++;
        j++;
    }
    
    return -1;
}