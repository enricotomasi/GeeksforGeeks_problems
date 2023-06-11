//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		bool palindromo(int n)
	    {
	        int k = n;
	        int ans = 0;
	        
	        while (k)
	        {
	            ans = ans *10 + k % 10;
	            k /= 10;
	        }
	        
	        return n == ans;
	    }
	    
	    bool primo(int n)
	    {
	        if (n<2) return false;
	        
	        for (int i=2; i<=sqrt(n); i++)
	        {
	            if (n%i == 0) return false;
	        }
	        
	        return true;
	    }
		
		int PrimePalindrome(int N)
		{
		    // Code here
		    int n = N;
		    
		    while (n >= N)
		    {
		        if (palindromo(n) && primo(n)) return n;
		        n++;
		    }	    
		
		}

};


//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.PrimePalindrome(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends