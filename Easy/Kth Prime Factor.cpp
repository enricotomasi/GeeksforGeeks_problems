//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int kthPrime(int n, int k)
    {
        // code here
        if (n <= 0) return -1;
        
        int fatt = 0;

        while (n % 2 == 0)
        {
            fatt++;
            n /= 2;
            if (fatt == k) return 2;
        }
        
        for (int i=3; i<=sqrt(n); i+=2)
        {
            while (n % i == 0)
            {
                 if (n > 2) fatt++;
                 if (fatt == k) return i;
                 n /= i;
            }
        }
   
        //cout << k << endl;
        
        if (fatt+1 == k && n > 2) return n;
        
        return -1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        Solution ob;
        cout<<ob.kthPrime(n, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends