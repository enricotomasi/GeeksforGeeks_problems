//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        long long int numberCount(long long int N, long long int K)
        {
            // your code here
            long long int ans = 0;
            
            for (long long int i=0; i<=N; i++)
            {
                long long int numero = i;
                long long int sommacifre = 0;
                
                while (numero)
                {
                    sommacifre += numero %10;
                    numero /=10;
                }

                if (i - sommacifre >= K) ans++;
                
            }
            
            return ans;
            
        }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends