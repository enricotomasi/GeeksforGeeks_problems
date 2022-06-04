 
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution
{
public:
    int swapNibbles(unsigned char x)
    {
        // code here
        int n = int(x);
        
        string s = bitset<8>(n).to_string();
        
        string sInv = "";
        
        sInv += s.substr(4,7);
        sInv += s.substr(0,4);
        
        //cout << sInv;
        
        int ans = stoi(sInv,0,2);
        
        return ans;
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
        cin>>N;
        Solution ob;
        cout << ob.swapNibbles(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends