//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:
	
	int binaryPalin(long long int N)
	{
	    // Your Code Here
	    string binario = "";
	    
	    while (N)
	    {
	        binario += to_string(N % 2);
	        N/=2;
	    }
	    
	    //cout << "binario: " << binario << endl;
	    
	    int n = binario.length();
	    
	    int s = n/2;
	    
	    string prima = binario.substr(0, s);
	    
	    if (n %2 != 0) s++;
	    
	    string seconda = binario.substr(s);
	    
	    reverse(seconda.begin(), seconda.end());
	    
	    //cout << prima << " " << seconda << endl;
	    
	    return prima == seconda;
	}
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		long long int n; cin >> n;
		Solution ob;
		cout << ob.binaryPalin (n) << endl;
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends