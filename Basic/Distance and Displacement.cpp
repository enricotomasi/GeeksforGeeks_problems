//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int distance(int n, int a[], char d[])
    {
        // code here
        
        // hint:
        //
        // The shortest distance from point A to point B 
        // is the direct disance between A and B or can say 
        // the straight line length of AB.
        
        int h=0;
        int v=0; 
        int tot=0;
        
        for (int i=0; i<n; i++)
        {
            if(d[i] == 'N') v+=a[i];
            if(d[i] == 'S') v-=a[i];
            if(d[i] == 'W') h-=a[i];
            if(d[i] == 'E') h+=a[i];
            
            tot += a[i];
        }
        
        int temp = pow(h,2) + pow(v,2);
        int ans = ceil(sqrt(temp)+tot);
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        char d[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        for(int i = 0;i < n;i++)
            cin>>d[i];
            
        Solution ob;
        cout<<ob.distance(n, a, d)<<"\n";
    }
    return 0;
}
// } Driver Code Ends