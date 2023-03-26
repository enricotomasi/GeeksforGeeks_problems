//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    bool isPrimeString(int N, string str)
    {
    	//code here.
    	long long int somma = 0;
    	
    	for (auto c : str) somma += c;
    	
    	for (int i=2; i*i <=somma; i++)
    	{
    	    if (somma %i == 0)
    	    {
    	        return false;
    	    }
    	}
    	
    	return true;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        int n;
        cin>>n>>str;
        Solution ob;
        if (ob.isPrimeString(n, str))
            cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
    }
	return 0;
}


// } Driver Code Ends