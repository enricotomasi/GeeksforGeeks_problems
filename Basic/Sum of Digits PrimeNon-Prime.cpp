// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
	int digitPrime(int N)
	{
	    //code here
	    int ans = 0;
	    
	    while (N>9)
	    {
	        int temp = 0;
	        while (N>0)
	        {
    	        int digit = N%10;
    	        temp += digit;
    	        
    	        N/=10;
    	    }    
    	    N = temp;
	    }
	    
	    if (N==2 || N == 3 || N == 5 || N == 7) return true;
	  
	    return false;
	    
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
       cout << ob.digitPrime(N)<<"\n";
    }
}  // } Driver Code Ends