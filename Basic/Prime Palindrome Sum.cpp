//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
  
    bool palindronomo(long long num)
    {
       
       string s = to_string(num);
       int n = s.length();
       
       bool pali = true;
       
       for (int i=0; i<n/2; i++)
       {
           if (s.at(i) != s.at(n-i-1))
           {
               pali = false;
               break;
           }
       }
       return pali;
    }
  
    bool primo (long long num)
    {
        if (num==1) return false;
        bool primo = true;
        for (long long i=2; i<num; i++)
        {
            if (num%i == 0)
            {
                primo=false;
                break;
            }
        }
        return primo;
    }
  
    long long getPPS(int a, int b)
    {
        // code here
        long long ans = 0;
        for (long long i=a; i<=b; i++)
        {
            if (palindronomo(i) && primo(i))
            {
                ans +=i;
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
        int a,b;
        
        cin>>a>>b;

        Solution ob;
        cout << ob.getPPS(a,b) << endl;
    }
    return 0;
}
// } Driver Code Ends