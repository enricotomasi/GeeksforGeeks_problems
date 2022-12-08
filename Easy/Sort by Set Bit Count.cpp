//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        multimap<int, int, greater<int>> mappa;
        
        for (int i=0; i<n; i++)
        {
            int sb = 0;
            int copia = arr[i];
            
            while (copia)
            {
                sb += copia&1;
                copia >>= 1;
            }
            
            mappa.insert({sb, arr[i]});
        }
        
        int i = 0;
        for (auto it : mappa)
        {
            arr[i] = it.second;
            i++;
        }
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends