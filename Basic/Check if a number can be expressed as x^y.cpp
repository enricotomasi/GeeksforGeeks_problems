// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
public:
    int checkPower(int N)
    {
        // code here 
        
        if (N==1) return 1;
        
        for (int i=2; i<N; i++)
        {
            for (int j=1; j<N; j++)
            {
                double p = pow(i,j);
                if (p==N) return 1;
            }
        }
        
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
        int N;
        cin >> N;
        Solution ob;
        cout << ob.checkPower(N) << endl;
    }
    return 0; 
}   // } Driver Code Ends