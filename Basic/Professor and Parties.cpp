 
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    
    string PartyType(long long int a[], int n)
    {
        // Your code goes here
        
        int mappa[100001] = { };
        
        for (int i=0; i<n; i++)
        {
            mappa[a[i]]++;
        }
        
        
        for (int i=0; i<100001; i++)
        {
            if (mappa[i] > 1) return "BOYS";
        }
        
        return "GIRLS";
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){

        int n;
        cin >> n;
        long long int a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        Solution ob;
        cout<< ob.PartyType(a, n) <<endl;
        
    }
    return 0;
}
  // } Driver Code Ends