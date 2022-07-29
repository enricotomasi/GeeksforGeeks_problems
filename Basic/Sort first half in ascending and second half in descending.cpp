//{ Driver Code Starts


#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends



class Solution
{
  public:
    void customSort(int arr[], int n)
    {
        // code here  
        vector<int> primi;
        vector<int> secondi;
        
        for (int i=0; i<n/2; i++) primi.push_back(arr[i]);
        
        for (int i=n/2; i<n; i++) secondi.push_back(arr[i]);
        
        sort (primi.begin(), primi.end());
        sort (secondi.begin(), secondi.end());
        reverse (secondi.begin(), secondi.end());
        
        for (int i=0; i<n/2; i++) arr[i] = primi[i];
        
        int j=0;
        for (int i=n/2; i<n; i++)
        {
            arr[i] = secondi[j];
            j++;
        }
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.customSort(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends