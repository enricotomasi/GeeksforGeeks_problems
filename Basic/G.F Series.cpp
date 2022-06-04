 
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void gfSeries(int N)
    {
        // Write Your Code here
        for (int i=1; i<=N; i++)
        {
            if (i==N)
            {
                cout << serie(i) << " ";
                break;
            }
            cout << serie(i) << " ";
        }
        
        cout << endl;
        
    }
    
    
    static long serie(int i)
    {
        if (i==1) return 0;
        if (i==2) return 1;
        return serie(i-2) * serie(i-2) - serie(i-1);
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
        cin>>N;
        Solution ob;
        ob.gfSeries(N);
    }
    return 0;
}  // } Driver Code Ends