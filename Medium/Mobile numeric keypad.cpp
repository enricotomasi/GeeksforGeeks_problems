//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    long long getCount(int n)
    {
        // Your code goes here
        vector<vector<int>> m;
        
        m.push_back( { 8 } );
        m.push_back( { 2, 4} );
        m.push_back( { 1, 3, 5} );
        m.push_back( { 2, 6 } );
        m.push_back( { 1, 5, 7 } );
        m.push_back( { 2, 4, 6, 8 } );
        m.push_back( { 3, 5, 9} );
        m.push_back( { 8, 4 } );
        m.push_back( { 7, 9, 5, 0 } );
        m.push_back( { 6, 8 } );
        
        vector<long long> one(10, 1);
        vector<long long> two(10, 1);
        
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                two[j] = one[j];
                
                for(auto it : m[j])
                {
                    two[j] += one[it];
                }
                
            }
            one = two;
        }
        
        long long ans = 0;
        
        for (int i = 0; i < 10; i++)
        {
            ans += two[i];    
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        cout << ob.getCount(n) << "\n";
    }
    return 0;
}

// } Driver Code Ends