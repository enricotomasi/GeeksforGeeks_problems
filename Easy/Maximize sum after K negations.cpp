//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort (a, a+n);
        int ans = 0;
        
        int j = 0;
        while (a[j] < 0 && k > 0)
        {
            a[j] = a[j] * -1;
            k--;
            j++;
        }
        
        if (k %2 != 0)
        {
            sort (a, a+n);
            a[0] = a[0] * -1;
        }
        
        for (int i=0; i<n; i++) ans += a[i];
        return ans;
    }
};

//{ Driver Code Starts.
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n, k;
         cin>>n>>k;
         long long int a[n+5];
         for(int i=0;i<n;i++)
         cin>>a[i];
         Solution ob;
         cout<<ob.maximizeSum(a, n, k)<<endl;
     }
	
	return 0;
}
// } Driver Code Ends