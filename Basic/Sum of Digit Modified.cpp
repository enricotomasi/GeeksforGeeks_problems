//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution 
{
  public:
    int isMagic(int N) 
    {
        // code here
        
        if (N==1) return 1;
        
        int temp = N;
        
        while (temp > 9)
        {
            int somma = 0;
            while (temp)
            {
                somma+=temp%10;
                temp/=10;
            }
            
            if (somma == 1) return 1;
            temp = somma;
        }
        
        return 0;

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
        cout << ob.isMagic(N) << "\n";
    }
}
// } Driver Code Ends