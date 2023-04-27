//{ Driver Code Starts
// C++ program to find minimum swaps
// required to group all 1's together
#include <bits/stdc++.h>

using namespace std;

// Function to find minimum swaps
// to group all 1's together
int minSwaps(int arr[], int n);

// Driver Code
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        cout << minSwaps(a, n) << endl;
    }

    return 0;
}

// } Driver Code Ends


int minSwaps(int arr[], int n)
{
    // Complete the function
    int uni = 0;
    
    for (int i=0; i<n; i++)
    {
        if (arr[i]) uni++;
    }
    
    if (uni == 0) return -1;
    if (uni == n) return 0;
    
    int ans = INT_MAX;
    
    int conta = 0;
    
    int inizio = 0; 
    int fine = 0;
    
    while (fine<n)
    {
        if (fine - inizio + 1 < uni)
        {
            if (arr[fine] == 0) conta++;
            fine++;
        }
        else if (fine - inizio + 1 == uni)
        {
            if (arr[fine] == 0) conta++;
            
            ans = min(ans, conta);
            
            if(arr[inizio] == 0) conta--;
            
            inizio++;
            fine++;
        }
      
    }
    
    return ans;
    
}