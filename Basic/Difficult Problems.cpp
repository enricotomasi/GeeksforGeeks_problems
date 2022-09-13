//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    int difProblem(string N) 
    {
        // code here
        int n = N.length();
        
        bool inc = false;
        bool dec = false;
        int last = INT_MAX;
        
        for (int i=0; i<n; i++)
        {
            char dig = N[i];
            string d = to_string(dig);
            int digit = stoi(d);
            if (last < INT_MAX)
            {
                if (last > digit) // Decreasing
                {
                    if (inc) return 0;
                    dec = true;
                }
                else              // Increasing
                {
                    if (dec) return 0;
                    inc = true;
                }
                
            }
            last = digit;
        }
        
        return 1;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string N;
        
        cin>>N;

        Solution ob;
        cout << ob.difProblem(N) << endl;
    }
    return 0;
}
// } Driver Code Ends