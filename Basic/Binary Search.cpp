//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution
{
  public:
  
      int binarysearch(int arr[], int n, int k)
    {
        // code here
        int left = 0;
        int right = n-1;
        
        while (left <= right)
        {
            int middle = left+(right-left)/2;
            if (arr[middle] == k) return middle;
            if (arr[middle]  < k) left  = middle+1;
            if (arr[middle]  > k) right = middle-1;
        }
        
        return -1;
        
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