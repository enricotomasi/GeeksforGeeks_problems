//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

long long selection(int a[], int n);


int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        cout << selection(a, n) << endl;
        
    }
    return 0;
}

// } Driver Code Ends

long long selection(int a[], int n)
{
    // Complete the function
    long long ans = 0;
    sort(a, a+n);
    
    for (int i=1; i<n; i++)
    {
        ans += (a[i] * i);
    }
    
    return ans;
    
}