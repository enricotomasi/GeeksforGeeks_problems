//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    int padovanSequence(int n)
    {
       //code here
       if (n < 3) return 1;
       long long int ans = 0;
       
       long long int m = pow(10, 9) +7;
       
       long long int p0 = 1;
       long long int p1 = 1;
       long long int p2 = 1;
       
       for (int i=2; i<n; i++)
       {
            ans = (p0 %m + p1 %m) %m;
            p0 = p1;
            p1 = p2;
            p2 = ans;
       }
       
       return (int)ans %m;
    }
    
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	Solution ob;
    	cout<<ob.padovanSequence(n)<<endl;
    }
    return 0;
}
// } Driver Code Ends