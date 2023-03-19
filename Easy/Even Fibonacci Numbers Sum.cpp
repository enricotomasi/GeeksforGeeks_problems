//{ Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    long long evenFibSum(int N)
    {
        // code here
        long long ans = 0;
        long long a = 0;
        long long b = 1;
        
        long long fibo = 1;
        
        while (fibo <= N)
        {
            //cout << fibo;
            if (fibo % 2 == 0)
            {
                ans += fibo;
                //cout << "*";
            }
            fibo = a + b;
            a = b;
            b = fibo;
            //cout << " ";
        }
        
        
        //cout << endl;
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
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenFibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends