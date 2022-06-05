 
// { Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
	public:
		string is_AutomorphicNumber(int n){
		    // Code here
		    int quadrato = pow(n,2);
		    
		    stringstream ss0;
		    ss0 << n;
		    string nStringa = ss0.str();
		    
		    stringstream ss;
		    ss << quadrato;
		    string quadratoStringa = ss.str();
		    
		    for (int i=0; i<nStringa.length(); i++) {
		        string q = quadratoStringa.substr(quadratoStringa.length()-1-i,1);
		        string b = nStringa.substr(nStringa.length()-i-1,1);
		        // cout << q << " ";
		        // cout << b << "\n";
		        if (q != b) return "Not Automorphic";
		    }
		    
		    return "Automorphic";
		    
		    
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
    	string ans = ob.is_AutomorphicNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}  // } Driver Code Ends