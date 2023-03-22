//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int minMoves(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout<<minMoves(a,n)<<endl;
    }
    return 0;
}

// } Driver Code Ends


int minMoves(int a[], int n)
{
    int inizio = 0;
    int fine = n-1;
    
    while (inizio < n && !a[inizio]) inizio += 1;
        
    if (inizio == n) return -1;
        
    while (fine >=0 && !a[fine]) fine -= 1;
        
    int dist = max(inizio, n-fine-1);
    fine = inizio + 1;

    while (fine<n)
    {
        while (fine<n && !a[fine]) fine += 1;
            
        if (fine<n)
        {
            dist = max(dist, (fine-inizio)/2);
            inizio = fine;
            fine += 1;
        }
    }
    
    return dist;

}