//{ Driver Code Starts



#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends


class Solution
{
public:
    
    int eea (int a, int b, int &x, int &y)
    {
        if (b==0)
        {
            x = 1;
            y = 0;
            return a;
        }
        
        int x1=0;
        int y1=0;
        
        int ans = eea(b,a%b,x1,y1);
        x = y1;
        y = x1 - (a/b) * y1;
        
        return ans;
        
    }
    
    vector<int> gcd(int a, int b)
    {
        // code here
        vector<int> ans;
        
        int x=0;
        int y=0;
        
        int ans1 = eea(a,b,x,y);
        
        ans.push_back(ans1);
        ans.push_back(x);
        ans.push_back(y);
        
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
        int a,b;
        cin>>a>>b;
        Solution ob;
        vector<int> v = ob.gcd(a,b);
        if(v.size()!=3)
            return 0;
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";
    }
    return 0; 
}
// } Driver Code Ends