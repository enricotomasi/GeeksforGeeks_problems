//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> cyclicPermutations(int N)
    {
        // Write Your Code here
        
        // Think about how to get the next cyclic permutation from given N 
        // and do the same after getting the next cyclic permutation.
        
        vector <int> ans;
        int n = log10(N)+1;
        
        int N2  = N;
        while (true)
        {
            ans.push_back(N2);
            int resto = N2%10;
            int div = N2/10;
            
            N2 = pow(10,n-1) * resto + div;
            
            if (N2 == N) break;
            
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
      
        Solution ob;
        vector<int> ans  = ob.cyclicPermutations(N);
        for(int permutation : ans){
            cout<<permutation<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends