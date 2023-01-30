//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int uneatenLeaves(int arr[],int n,int k);


int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
         
        int n;
        cin>>n;
        int k;
        cin>>k;
        int arr[k];
        for(int i=0;i<k;i++)
        cin>>arr[i];
        cout<<uneatenLeaves(arr,n,k)<<endl;
    }
 }
    
        
// } Driver Code Ends


int uneatenLeaves(int arr[], int n, int k)
{
    // Your code goes here
    bool map[n+1] = {};
    int ans = n;
    
    for (int i=0; i<k; i++)
    {
        int temp = arr[i];
        int mul = 1;
        
        if (map[temp-1] == 0)
        {
            while (temp <= n)
            {
                if (map[temp-1] == 0) 
                {
                    map[temp-1]=1;
                    ans--;
                }
                mul++;
                temp = arr[i] * mul;
            }
        }
    }
    
    return ans;
}
