 
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
public:
    int isPowerOfAnother(long long X, long long Y)
    {
        // code here 
        
         if(log(Y)/log(X) - (int)((log(Y)/log(X))) == 0) return 1;
       
        return 0;

    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int X, Y;
        cin >> X >> Y;
        Solution ob;
        cout << ob.isPowerOfAnother(X,Y) << endl;
    }
    return 0; 
}   // } Driver Code Ends