//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<int> minPartition(int N)
    {
        // code here
        vector<int> monete = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        vector<int> ans;
        
        for (int i=monete.size()-1; i>=0; i--)
        {
            int moneta = monete[i];
            if (N>=moneta)
            {
                int quanteMonete = (int)N/moneta;
                N = N%moneta;
                for (int j=0; j<quanteMonete; j++) ans.push_back(moneta);
            }
        }
        
        return ans;
        
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
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends