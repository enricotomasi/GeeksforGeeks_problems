//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
   	int no_of_ways(int n)
   	{
   	    // Code here
   	    unsigned long long int M = pow(10,9)+7;
        unsigned long long int ans = 1;
        unsigned long long x = 2;
        n--;
        while (n)
        {
            if (n%2==1) ans = (ans*x) %M;
            x = (x*x)%M;
            n/=2;
        }
        
   	    return (int)ans;

   	    
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
		int ans = ob.no_of_ways(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends