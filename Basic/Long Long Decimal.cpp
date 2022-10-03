//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
   	string upto_K_places(int k)
   	{
   	    // Code here
   	    if(k==0) return "3";
   	        
   	    string ans="3.";
   	    int n=(355-339)*10;
   	    int i=1;
   	    
   	    while(i<=k)
   	    {
   	        ans += (n/113)+'0';
   	        n-=(n/113)*113;
   	        n*=10;
   	        i++;
   	    }
   	    
   	    return ans;
  	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int k;
		cin >> k;
		Solution ob;
		string ans = ob.upto_K_places(k);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends