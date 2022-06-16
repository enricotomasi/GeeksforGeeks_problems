// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
    void Rearrange(int a[], int n, int answer[])
    {
        sort(a, a+n);
        
        int conta = 0;
        for (int i=0; i<n/2; i++)
        {
            answer[conta] = a[i];
            conta++;
            answer[conta] = a[n-i-1];
            conta++;
        }
        
        if (n%2!=0) answer[n-1] = a[n/2];
        
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i, a[n+5], answer[n+5]={0};
		for(i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.Rearrange(a, n, answer);
		
		for(i=0;i<n;i++)
		cout<<answer[i]<<" ";
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends