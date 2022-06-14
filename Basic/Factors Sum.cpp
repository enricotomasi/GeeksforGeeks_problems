// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    long long factorSum(int N)
    {
        // Your code goes here
        long long ans = 0;
        
        if (N==1) return 1;
        
        for (int i=1; i<=(int)sqrt(N); i++)
        {
            if (N%i==0)
            {
                if (N/i == i)
                {
                    ans +=i;
                }
                else
                {
                    ans+= i+(N/i);
                }
            }
            
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
        int N;
        cin >> N;

        Solution ob;
       	cout <<  ob.factorSum(N) << "\n";
   
    }
    return 0;
}
  // } Driver Code Ends