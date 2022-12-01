//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

bool find4Numbers(int A[], int n, int X);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, x;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin>>x;
        cout << find4Numbers(a, n, x) << endl;

    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

bool find4Numbers(int A[], int n, int X)  
{
    for (int i=0; i<n; i++)
    {
        if (A[i] >= X) continue;
        for (int j=0; j<n; j++)
        {
            if (i==j) continue;
            if (A[i] + A[j] >= X) continue;
            for (int k=0; k<n; k++)
            {
                if (A[i] + A[j] + A[k] >= X) continue;
                if (i == j || i == k || j==k) continue;
                for (int h=0; h<n; h++)
                {
                    
                    if (i==j || i==k || i == h || 
                        j==k || j==h ||
                        k==h) continue;
                        
                    if (A[i] + A[j] + A[k] + A[h] == X) return true;
                    
                }
            }
        }
    }
    
    return false;
}