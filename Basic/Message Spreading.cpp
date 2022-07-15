// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int minimumMessages(int N)
    {
        // code here 
        return (N*2)-2;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.minimumMessages(N) << endl;
    }
    return 0; 
}   // } Driver Code Ends