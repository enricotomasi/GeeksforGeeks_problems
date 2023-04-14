//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    long long solve(int arr[], int n)
    {
        // your code here
        sort(arr, arr+n);
        long long ans = ((long long)n * (long long)(n-1)) / 2;
        int temp = 1;
        
        for (int i=0; i<n; i++)
        {
            if (arr[i] == arr[i+1]) temp++;
            else
            {
                ans -= temp * (temp-1)/2;
                temp = 1;
            }
        }
        
        ans -= (temp * (temp-1)) /2;
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int arr[n];
        for(int i = 0; i<n; i++)
            cin >> arr[i];
        Solution ob;
        long long ans = ob.solve(arr,n);
        cout << ans << endl;
    }
}

// } Driver Code Ends