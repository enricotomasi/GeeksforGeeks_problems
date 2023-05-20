//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

bool vessel(int a[], int n, int k);



int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n+1];
        
        for(int i=0;i<n;i++)
            cin>> a[i];
        
        
        if(vessel(a, n, k)){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        
    }
    return 0;
}

// } Driver Code Ends


bool vessel(int a[], int n, int k)
{
    // Complete the function
    int mappa[k+1] = {};
    
    for (int i=0; i<n; i++)
    {
        for (int j=a[i]; j<=k; j+=a[i])
        {
            mappa[j] = 1;
        }
    }
    
    for (int i=1; i<=k; i++)
    {
        if (mappa[i] == 1)
        {
            for (int j=0; j<n; j++)
            {
                for (int h=i+a[j]; h<=k; h+=i+a[j])
                {
                    mappa[h] = 1;
                }
                
            }
        }
    }
    
    
    
    //for (int i=0; i<=k; i++) cout << mappa[i] << " ";
    //cout << endl;
   
    return mappa[k];
    
}