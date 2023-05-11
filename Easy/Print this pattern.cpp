//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void printPattern(int N)
    {
        // Write Your Code here
        for (int i=N; i>0; i--)
        {
            for (int j=N; j>0; j--)
            {
                if (j > i) cout << j;
                else       cout << i;
            }
            
            for (int j=2; j<=N; j++)
            {
                if (j > i) cout << j;
                else       cout << i;
            }
            
            cout << endl;
        }
        
        for (int i=2; i<=N; i++)
        {
            for (int j=N; j>0; j--)
            {
                if (j > i) cout << j;
                else       cout << i;
            }
            
            for (int j=2; j<=N; j++)
            {
                if (j > i) cout << j;
                else       cout << i;
            }
            
            cout << endl;
        }
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        
        Solution ob;
        ob.printPattern(N);
        
    }
    return 0;
}
// } Driver Code Ends