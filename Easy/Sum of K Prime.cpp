//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
    public:
        
        bool primo(int n)
        { 
            if (n < 2) return false;
            
            for (int i = 2; i * i <= n; i++)
            {
                if( n % i == 0) return false; 
            }
            
            return true;
        
        }
        
        bool isSumOfKprimes(int N, int K)
        {
            // Code Here
            if (N >= 2 * K && K == 1)
            {
                if (primo(N)) return 1;
                return 0;
            }
       
            if (N >= 2 * K && K == 2)
            {
                if (N % 2 == 0) return 1;
                else
                {
                    if (primo(N - 2)) return 1;
                    return 0;
                }
            }
           
            if (N >= 2 * K && K >= 3) return 1;
            return 0;
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
		int N,K;
		cin>>N>>K;
        if(ob.isSumOfKprimes(N,K))
		    cout<<"1\n";
        else
             cout<<"0\n";
	}
	return 0;
}
// } Driver Code Ends