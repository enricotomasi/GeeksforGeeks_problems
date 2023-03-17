//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution
{
  public:
    
    int ric(int arr[], int inizio, int fine, int k, int n)
    {
        if (inizio > fine) return -1;
        int mid = inizio + (fine - inizio) /2;

        //cout << arr[mid] << endl;
        
        if (arr[mid] == k) return mid;
        
        if (arr[mid] > k) return ric(arr, inizio, mid-1, k, n);
        else              return ric(arr, mid+1, fine, k, n);
        
    }
    
    int binarysearch(int arr[], int n, int k)
    {
        // code here
        return ric(arr, 0, n-1, k, n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends