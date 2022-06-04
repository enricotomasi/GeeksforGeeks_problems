 
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int divisibleBy4 (string N)
	{
	    // Your Code Here
	    
	    int numero = 0;
	    
	    if (N.length() <= 2)
	    {
	        numero = stoi(N);
	    }
	    else
	    {
	        numero = stoi(N.substr(N.length()-2, 2));
	    }
	    
	    //cout << numero << "\n";
	    
	    if (numero % 4 == 0) return 1;
	    else return 0;
	    
	}
};

// { Driver Code Starts.

int32_t main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy4 (s) << endl;
	}
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends