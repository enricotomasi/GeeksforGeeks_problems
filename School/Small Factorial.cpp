// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
	public:
		long long int find_fact(int n){
		    // Code here.
		    
		    if (n==0) return 1;
		    if (n==1) return 1;
		    if (n==2) return 2;
		    
		    long ans = 1;
		    
		    for (int i=1; i<=n; i++) {
		        ans = ans * i;
		        //cout << i << "\n";
		        //cout << ans << "\n\n";
		    }
		    return ans;
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	long long int ans = ob.find_fact(n);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends