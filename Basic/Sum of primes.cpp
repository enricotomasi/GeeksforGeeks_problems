// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int primeSum(int N)
    {
        // code here
        int ans = 0; 
        string s = to_string(N);
        for (auto a : s)
        {
            string b = "";
            b+=a;
            int num = stoi(b);
            //cout << num << " ";
            
            if (num == 2 || num == 3 || num == 5 || num == 7) ans += num;
        }
        
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends 
