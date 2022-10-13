//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int> ans;
            
            int c2 = 0;
            int c3 = 0;
            
            for (int i=0; i<n1; i++)
            {
                int el = A[i];
                
                bool secondo = false;
                while (B[c2] <= el && c2 < n2)
                {
                    if (B[c2] == el) secondo = true;
                    c2++;
                }
                
                bool terzo = false;
                while (C[c3] <= el && c3 <n3)
                {
                    if (C[c3] == el) terzo = true;
                    c3++;
                }
                
                if (secondo && terzo) ans.push_back(el);
            }
            
            if (ans.size() <= 0)
            {
                ans.push_back(-1);
            }
            
            
            return ans;
        }

};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}
// } Driver Code Ends