//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
public:
      int distance(int X, int Y)
      {
            // code here
            int ans = 0;
            
            while (X != Y)
            {
                if (X > Y) X /= 2;
                else       Y /= 2;
                
                ans++;
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
        long long X,Y;
        cin>>X>>Y;
        Solution ob;
        cout << ob.distance(X,Y) << endl;
    }
    return 0; 
}
// } Driver Code Ends