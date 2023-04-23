//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void p1 (int i, int n)
    {
        for (int j=0; j<n-i; j++)    
            {
                cout << "*";
            }
            
            for (int j=0; j<i*2; j++)
            {
                cout << " ";
            }
            
            for (int j=0; j<n-i; j++)    
            {
                cout << "*";
            }
            
            cout << endl;
    }
    
    void printTriangle(int n)
    {
        // code here
        for (int i=0; i<n; i++) p1(i, n);
        
        for (int i=n-1; i>=0; i--) p1(i, n);
 
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
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends