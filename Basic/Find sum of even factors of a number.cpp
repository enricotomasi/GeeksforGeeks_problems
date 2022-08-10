//{ Driver Code Starts

#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int evenFactors(int N)
    {
        // code here
        if (N==2) return 3;
        if (N==1) return 0;
        
        int ans = 0;
        
        for (int i=1; i<=N;i++)
        {
            if (i%2==0 && N%i == 0)
            {
                ans += i;
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenFactors(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends