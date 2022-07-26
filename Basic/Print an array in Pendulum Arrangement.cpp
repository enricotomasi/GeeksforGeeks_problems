//{ Driver Code Starts
// C++ program for pendulum arrangement of numbers
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Returns pendulam arrangement of arr[]
vector<int> pendulumArrangement(int arr[], int n) 
{
    int a[n] = {};
    
    sort(arr, arr+n);
    
    int mezzo = n/2;
    if (n%2 ==0) mezzo--;
    
    int offset = 1;
    int verso = true;
    
    a[mezzo] = arr[0];
    
    for (int i=1; i<n; i++)
    {
        if (verso)
        {
            a[mezzo+offset] = arr[i];
        }
        else
        {
            a[mezzo-offset] = arr[i];
            offset++;
        }
        
        verso = !verso;
    }
    
   
    
    vector<int> ans;
    for (int i=0; i<n; i++)
    {
        ans.push_back(a[i]);
    }
    
    return ans;
    
    
}


//{ Driver Code Starts.

int main() {
    int t, i;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) cin >> arr[i];

        vector<int> ans = pendulumArrangement(arr, n);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends