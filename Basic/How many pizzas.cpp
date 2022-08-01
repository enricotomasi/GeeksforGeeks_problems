//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int getCommon(int stack1[], int stack2[])
    {
        // Write your code here
       int mappa[11][11];
      
       for(int i = 0; i <= 10; i++)
       {
           mappa[i][0] = 0;
           mappa[0][i] = 0;
       }
       
       for(int i = 1; i <= 10; i++)
       {
           for(int j = 1; j <= 10; j++)
           {
               if(stack1[i-1] == stack2[j-1]) mappa[i][j] = 1 + mappa[i-1][j-1];
               else mappa[i][j] = max(mappa[i-1][j], mappa[i][j-1]);
           }
           
       }
       
       int ans = mappa[10][10];
       return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t-- > 0)
    {
        int stack1[10] ;
        for(int i = 0; i < 10; i++)
            cin >> stack1[i];

        int stack2[10];
        for(int i = 0; i < 10; i++)
            cin >> stack2[i];
        Solution ob;
        cout<<ob.getCommon(stack1, stack2)<<endl;

    }
    return 0;
}
// } Driver Code Ends