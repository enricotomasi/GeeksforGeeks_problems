//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
    
    
    int somma(long long int a)
    {
        if(a==0) return 0;
        return somma(a/10)+(a%10);
    }
    
    long long int findMax(long long int N)
    {
    	// Code Here
    	long long int b = 1, ans = N;
        
        while (N)
        {
            long long int temp = (N-1) * b + (b- 1);
            if (somma(temp) > somma(ans) || (somma(temp) == somma(ans) &&  temp > ans)) ans = temp;
            N /= 10;
            b *= 10;
        }
      
       return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    Solution ob;
	int t;
	cin>>t;
	while(t--)
	{
        long long int  N;
        cin>>N;
    	cout<<ob.findMax(N)<<"\n";
	}
	return 0;
}

// } Driver Code Ends