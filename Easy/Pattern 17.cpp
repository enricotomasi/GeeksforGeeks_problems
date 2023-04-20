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
        
        int spacing = 0;   

        stack<string> st;
        for (int i=n-1; i>=0; i--)
        {
            string riga = "";
            
            for (int j=0; j<spacing; j++) riga += " ";
    
            for (int j=0; j<i+1; j++) riga += (char)('A' + j);

            for (int j=i; j>0; j--) riga += (char)('A' + j - 1);

            st.push(riga);
            
            spacing++;
        }
  
        while (!st.empty())
        {
            cout << st.top() << endl;
            st.pop();
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