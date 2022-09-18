//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution{
public:    
    vector<int> printNumHavingAltBitPatrn(int n)
    {
       // Code here

       vector<int> ans;
       
       int a = 1;
       int conta = 2;
       
       while (a<=n)
       {
           ans.push_back(a);
           a = a << 1;
           if (conta %2 != 0) a = a | 1;
           conta++;
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
        int n;
        cin>>n;
        vector<int> v;
        Solution ob;

        v = ob.printNumHavingAltBitPatrn(n);
        for(int i: v)
            cout << i << " ";
        cout<<endl;    
    }
    return 0;
}
// } Driver Code Ends