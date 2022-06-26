// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
    // Write your code here

class Solution{
    public:
    int mergeNsort(int a[], int b[], int n, int m, int answer[])
    {
        // Write your code here
        
       int mappa[100001] = { };
       int conta = 0;
       
       for(int i = 0; i<n; i++)
       {
           mappa[a[i]]++;
       }
       
       for(int i = 0; i<m; i++)
       {
           mappa[b[i]]++;
       }
       
       for(int i = 1; i<100000; i++)
       {
           if(mappa[i] > 0)
           {
               answer[conta] = i;
               conta++;
           }
       }
       
       return conta;
      
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>m;
        int b[m+5];
        for(int j=0;j<m;j++)
            cin>>b[j];
        Solution ob;
        int answer[n+m+5];
        int x=ob.mergeNsort(a, b, n, m, answer);
        
        for(int i=0;i<x;i++)
        cout<<answer[i]<<" ";
        cout<<endl;
    }
	
	return 0;
}  // } Driver Code Ends