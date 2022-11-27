//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:

   	
   	long long int prime_Sum(int n)
   	{
   	    // Code here
   	    bool numeri[n + 1];
   	    memset(numeri, true, sizeof(numeri));
        
        for (int i = 2; i*i <= n; i++) 
        {
            if (numeri[i])
            {
                for (int j = i * i; j <= n; j += i)
                {
                    numeri[j] = false;
                }
            }
        }
         
        long long int ans = 0;
        for (int i = 2; i <= n; i++)
        {
                if (numeri[i]) ans +=i;       
        }
        
        return ans;
            
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
		long long int ans = ob.prime_Sum(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends