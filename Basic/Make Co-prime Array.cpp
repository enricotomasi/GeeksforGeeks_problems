//{ Driver Code Starts
// CPP program for minimum insertions to
// make a Co-prime Array.
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    int gcd(int a,int b) 
    {
        int R;
        while ((a % b) > 0)
        {
            R = a % b;
            a = b;
            b = R;
        }
        return b;
    }


	int countCoPrime(int arr[], int n)
	{
	    // Complete the function
	    // Used hint:
	    // Observe that to make a pair to become co-primes we have to insert a number which makes the newly formed pairs co-primes. 
	    // So, we have to check every adjacent pair for their co-primality and insert a number if required. 
	    // Now, what is the number that should be inserted?
	    // Let us take two numbers a and b. If any of a or b is 1, then GCD(a, b) = 1. So, we can insert ONE(1) at every pair.
	    // For efficiency we use euler’s gcd function.
	    
	    int ans = 0;
	    for (int i=0; i<n-1; i++)
	    {
	        int a = arr[i];
	        int b = arr[i+1];
	        
	        int gc = gcd(a,b);
	        
	        if (gc != 1) ans++;
	        
	    }
	    
	    return ans;

	    
	}

};

//{ Driver Code Starts.

// Driver Function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout << ob.countCoPrime(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends