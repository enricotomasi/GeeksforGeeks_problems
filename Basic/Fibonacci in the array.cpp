// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	

	public:
	int checkFib(long long arr[], int N)
	{
	    // Your code goes here
	    int ans = 0;
	    
	    long long massimo = -1;
	    for (int i=0; i<N; i++)
	    {
	        massimo = max(massimo, arr[i]);
	    }
	    
	    vector<long long> fib;
        fib.push_back(0);
        long long a = 1;
        long long b = 0;
        long long fibo = 0;
        while (fibo <= massimo)
        {
        	fibo = a + b;
        	if (fibo <= massimo) fib.push_back(fibo);
        	a = b;
        	b = fibo;
        }
        
        for (int i=0; i<N; i++)
        {
            if (count(fib.begin(), fib.end(),arr[i])) ans ++;
        }
        
	    return ans;
	}

};
	

// { Driver Code Starts.



int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		long long a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
        

        Solution ob;
        cout << ob.checkFib(a, n);
	    cout << "\n";
	     
    }
    return 0;
}

	  // } Driver Code Ends