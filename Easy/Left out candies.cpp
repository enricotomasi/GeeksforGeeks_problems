//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long leftCandies(long long n, long long m);

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        auto ans = leftCandies(n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends


long long leftCandies(long long n, long long m)
{
    // code here
    /*
        Hint:
        
        First find the left candies when you are distributing candies for last round.
        It can be easily derivable that to distribute candies to n students we need n*(n+1)/2 candies. 
        Now use binary search to check for which i you are able to distribute candies to students 1 to i,
        but you can't distribute any more.
    */
    
    long long ultimo = m % (n * (n + 1) / 2);
    long long start = 0;
    long long end = n - 1;
    
    while(start <= end)
    {
       long long meta = (start + end) / 2;
       long long temp = meta * (meta + 1) / 2;
       
       if      (ultimo >= temp && ultimo - temp < meta + 1) return ultimo - temp;
       else if (ultimo > temp)                              start = meta + 1;
       else                                                 end = meta-1;
       
    }
    
}