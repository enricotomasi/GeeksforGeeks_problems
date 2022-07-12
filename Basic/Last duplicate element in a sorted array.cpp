// { Driver Code Starts
// To print last duplicate element and its
// index in a sorted array
#include<bits/stdc++.h>
using namespace std;

vector<int> dupLastIndex(int arr[], int n) ;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int> v;
        v = dupLastIndex(a,n);
        for(int i:v)
            cout << i << " ";
        cout << endl;
        
    }
return 0;
}

// } Driver Code Ends


vector<int> dupLastIndex(int arr[], int n)
{
    // Complete the function
    int mappa[100001] = {};
    
    for (int i=0; i<n; i++)
    {
        mappa[arr[i]]++;
    }
    
    int indice = -1;
    for (int i=0; i<n; i++)
    {
        if (mappa[arr[i]] >= 2) indice = i;
    }
    
    vector<int> ans;

    ans.push_back(indice);
    if (indice >0) ans.push_back(arr[indice]);
 
    return ans;   
}
