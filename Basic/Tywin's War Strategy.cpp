//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


int min_soldiers(int arr[], int n, int k);


int main() {
    
    int t;cin>>t;
    while(t--)
    {
        int n, k;
        cin>> n >> k;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
            
        cout << min_soldiers(arr, n, k) << endl;
        
    }
	
	return 0;
}
// } Driver Code Ends


int min_soldiers(int arr[], int n, int k)
{
    // Complete the function
    
    //( K - A[i] % K ) % K 
   
    int aggiungi[n];
    
    for (int i=0; i<n; i++)
    {
        aggiungi[i] = (k-arr[i] %k)%k;
    }
    
    sort (aggiungi, aggiungi+n);
    
    int ans = 0;
    
    int mezzo = (n+1)/2;
    
    for (int i=0; i<mezzo; i++)
    {
        ans += aggiungi[i];
    }
    
    
    return ans;
}