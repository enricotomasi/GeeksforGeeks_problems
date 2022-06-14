// { Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int minDiff(int arr[], int N, int K)
    {
        int ans = INT_MAX;
        sort(arr,arr+N);
 
        for (int i=0; i<N-K+1; i++)
        {
           ans = min(ans,abs(arr[i]-arr[i+K-1]));
        }
        
      
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution obj;
		cout<<obj.minDiff(a,n,k)<<endl;
	}
	return 0;
}  // } Driver Code Ends