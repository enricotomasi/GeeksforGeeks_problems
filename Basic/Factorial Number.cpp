//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isFactorial(int N)
    {
        //code here
        int i = 1;
        int fatto = 1;
        
        while (true)
        {
            fatto *= i;
            //cout << fatto << endl;
            if (fatto == N) return true;
            else if (fatto > N) return false;
            i++;
        }
        
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
        cout << ob.isFactorial(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends