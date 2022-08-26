//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int isTrimorphic(int N)
    {
        // code here
        if (N<=1) return 1;

        vector<int> n;
        
        int temp = N;
        while (temp)
        {
            n.push_back(temp%10);
            temp/=10;
        }
        
        long long int cubo = pow(N,3);
        
        int i =0;
        while (cubo)
        {
            if (i>= n.size()) return true;
            if (cubo%10 != n[i]) return false;
            
            cubo /=10;
            i++;
        }
        
        
        return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.isTrimorphic(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends