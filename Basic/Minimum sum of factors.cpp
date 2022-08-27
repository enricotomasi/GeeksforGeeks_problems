//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
  public:
    bool primo(int n)
    {
       for(int i=2;i*i<=n;i++)
       {
           if(n%i==0) return false;
       }
       return true;
    }
    
    
    int sumOfFactors(int N)
    {
        // code here
        int i=2;
        int ans =0;

        if(N==2 ||N==1) return 1;
        
        if(primo(N)) return N+1;
       
        int temp = N;
        while(temp!=1)
        {
           if(temp%i!=0) i++;
            else
            {
                temp /= i;
                ans += i; 
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfFactors(N);
        cout << ans << "\n";
    }
}
// } Driver Code Ends