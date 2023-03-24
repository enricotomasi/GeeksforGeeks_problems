//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int gameOfXor(int N , int A[])
    {
        // code here
        /*
        
            Hint1:
            If an element is xor with itself, even number of times, it becomes 0.
            If an element is xor with itself, odd number of times, it remains the same.
            For example
            (A^A)^2n   = 0            // even no of times
            (A^A)^2n+1  = A          // odd no of times
            
            Hint2:
            For array [1,2,3] its subarrays will be
            1
            1 2
            2
            3
            1 2 3
            2 3
            
            Here a particular ith index repeates (N-i) * (i+1) times. 
            Now if we see carefully (N-i) or (i+1) is always an even number for all values of i's possible.
            
            
            Hint 3:
            For even length xor of all subarrays will be 0 and for odd length xor 
            of all subarrays will be xor of all even index elements.
        
        */
        
        if (N % 2 == 0) return 0;
        
        if (N == 1) return A[0];
        
        int ans = 0;
        for (int i=0; i<N; i+=2)
        {
            ans ^= A[i];
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
        
        cin>>N;
        int A[N];
        for(int i=0 ; i<N ; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.gameOfXor(N,A) << endl;
    }
    return 0;
}
// } Driver Code Ends