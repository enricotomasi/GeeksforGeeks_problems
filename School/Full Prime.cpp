 
// { Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
	int fullPrime(int N){
	    //code here
	    int numero = N;
	    while (numero >= 1) {
	        int cifra = (numero%10);
	        numero = floor(numero/10);
	        //cout << "Cifra: " << cifra << "   numero:" << numero << "\n";
	        if (cifra != 2 &&
	        cifra != 3 &&
	        cifra != 5 &&
	        cifra != 7 
	        ) return 0;
	    } 
	    
	    //cout << "ok cifre\n";
	    
	    for (int i=2; i<=sqrt(N); i++) {
	        //cout << "N: " << i << " --- " << N%i << "\n";
	        if (N%i == 0) return 0;
	    }
	    
	    return 1;
	    
	    
	    
	    
	}
};


// { Driver Code Starts.
int main()
{
	int t;
    cin>>t;
    while(t--){
	   int N;
	   cin>>N;
       Solution ob;
       cout << ob.fullPrime(N)<<"\n";
    }
}  // } Driver Code Ends