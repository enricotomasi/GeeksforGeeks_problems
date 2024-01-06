//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool check (int arr[], int s, int b, int mid)
    {
        int c = 1;
        int ps = 0;
        
        for (int i = 0; i < b; i++)
        {
            if (ps + arr[i] <= mid) ps += arr[i];
            else
            {
                c++;
                if (c > s || arr[i] > mid) return false;
                ps = arr[i];
            }
        }
           
        return true;
    }
    
    
    int findPages(int A[], int N, int M) 
    {
        //code here
        if (M > N) return -1;
        
        int start = 0;
        int end = 0; 
        
        for (int i = 0; i < N; i++) end += A[i];
        
        int ans = -1;
        
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            
            if (check(A, M, N, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else start = mid + 1;
        }
          
          return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends
