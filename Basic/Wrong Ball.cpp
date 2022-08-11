//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int countWrongPlacedBalls(string s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        cout<<countWrongPlacedBalls(a)<<endl;
        
    }
}

// } Driver Code Ends


int countWrongPlacedBalls(string s)
{
    //code here.
    int ans = 0;
    bool red = true;
    
    for (char c : s)
    {
        if ((red && c == 'B') || (!red && c == 'R')) ans++;
        red = !red;
    }
    
    return ans;
    
}
