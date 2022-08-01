//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;


int max_adjacent_sum(int arr[], int n);

int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << max_adjacent_sum(arr, n) << endl;
        
    }

}



// } Driver Code Ends


int max_adjacent_sum(int arr[], int n)
{
    // Complete the function
    int ans = INT_MIN;
    
    for (int i=0; i<n-1; i++)
    {
        int melodia = arr[i] + arr[i+1];
        ans = max(ans, melodia);
    }
    
    return ans;
}
