//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int fib(int N)
    {
        //code here
        if (N == 0) return 0;
        if (N < 3) return 1;
        
        long long int fibo = 0;
        long long int a = 1;
        long long int b = 1;
        
        for (int i=3; i<=N; i++)
        {
            fibo = (a+b) %10;
            b = a;
            a = fibo;
            //cout << fibo << " ";
        }
        
        return (int)(fibo %10);
        
        
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
        cout << ob.fib(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends