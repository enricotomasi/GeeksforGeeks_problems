// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    int fingerCount(int N)
    {
        // Write Your Code here
        if (N<=5) return N;
        
        int ans = 0;
       
        bool dritto = true;
        int dito = 5;
        for (int i=6; i<=N; i++)
        {
            if (dito == 1 || dito == 5) dritto = !dritto;
            if (dritto) dito++;
            else dito--;
        }
        
        
        return dito;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
      
        Solution ob;
        int ans  = ob.fingerCount(N);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends