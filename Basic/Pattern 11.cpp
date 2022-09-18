
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void printTriangle(int n)
    {
        // code here
        int uno = true;
        int unoriga = false; 
        
        for (int i=1; i<=n; i++)
        {
            for (int j=1; j<=i; j++)
            {
                if (uno) cout << "1 ";
                else     cout << "0 ";
                uno = !uno;
            }
            
            cout << endl;
            
            if (unoriga) uno = true;
            else         uno = false;
            
            unoriga = !unoriga;
        }
        
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