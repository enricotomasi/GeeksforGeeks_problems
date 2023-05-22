//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
class Solution{

// } Driver Code Ends
	public:
	bool primo(int n)
	{
	    if (n<2) return false;
	    
	    for (int i=2; i<=sqrt(n); i++)
	    {
	        if (n%i == 0) return false;
	    }
	    
	    return true;
	}
	
	
	int isCircularPrime(int n)
	{
	    // Code here
        if (!primo(n)) return false;
        
        string numero = to_string(n);
        int l = numero.length();
        
        for (int i=0; i<l-1; i++)
        {
            int prima = numero[0];
            numero = numero.substr(1);
            numero += prima;
            
            int ruotato = stoi(numero);
            
            if (!primo(ruotato)) return false;
        }
        
        
        
	    return true;
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
		int ans = ob.isCircularPrime(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends