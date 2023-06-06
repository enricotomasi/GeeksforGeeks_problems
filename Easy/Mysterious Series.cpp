//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
  public:
 
    long long nthMysterious(long long N)
    {
        // code here
        int numero = 100000;
        
        long long arr[numero+1];
        for (int i=0; i<=numero; i++) arr[i] = true;

        for (int i=2; i*i<=numero; i++)
        {
            if(arr[i])
            {
                for(int j=i*i; j<=numero; j+=i)
                {
                    arr[j] = false;
                }
            }
        }
        
        vector<long long> primi;
        
        for(int i=2; i<=numero; i++)
        {
            if(arr[i]) primi.push_back(i);
        }
        
        return (primi[N-1] * primi[N-1]) + 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.nthMysterious(N) << endl;
    }
    return 0;
}

// } Driver Code Ends