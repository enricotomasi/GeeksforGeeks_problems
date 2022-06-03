// { Driver Code Starts
#include <iostream>
using namespace std;
#define ll long long

ll findMaxProduct(int A[], int n, int k);

int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int k;
		cin>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
	
		cout<<findMaxProduct(a,n,k)<<endl;
	}
	// your code goes here
	return 0;
}// } Driver Code Ends


/*You are required to complete the function*/

long long findMaxProduct(int A[], int n, int k)
{
    //Your code here
    
    // Massimo prodotto dei k elementi continui
    
    //cout << k << "\n";
    
    int ans = -1;
    for (int i=k-1; i<n; i++)
    {
        int molti = A[i];
        
        //cout << molti << " ";
        
        for (int j=1; j<k; j++)
        {
            molti *= A[i-j];
            //cout << A[i-j] << " ";
        }
        
        ans = max(ans, molti);
        
        //cout << "\n";
    }
    
    
    //cout << "\n-----";
    return ans;

    
}

