//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> goals(int X, int Y, int Z)
    {
        // code here
        
        int gx = 0;
        int gy = 0;
        
        while (Z > 1)
        {
            if (X && X % Z == 0)
            {
                X--;
                gx++;
            }
            else if (Y && Y % Z == 0)
            {
                Y--;
                gy++;
            }
            else
            {
                Z--;
            }
            
            //cout << X << " " << Y << " " << Z << endl;
            
        }
        
        
        return {gx, gy};
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int X, Y, Z;
        cin>>X>>Y>>Z;
        
        Solution ob;
        vector<int> ans = ob.goals(X, Y, Z);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends