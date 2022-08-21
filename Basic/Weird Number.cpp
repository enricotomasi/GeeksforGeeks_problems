//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
   	int is_weired(int n){
   	    // Code here
   	    int x,sum=0,i;
        x=n;
	    for(i=n-1;i>=1;i--)
	    {
	        if((n%i)==0)
	        {
	            sum+=i;
	            if(i<=x) x-=i;
	        }
	    }
	    
	    return (x!=0 && sum>n);
	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.is_weired(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends