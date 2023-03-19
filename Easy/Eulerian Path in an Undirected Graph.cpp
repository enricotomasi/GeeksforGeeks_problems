//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:

    /*
        Every node must have even number of edges. 
        If there is any odd edged vertex then there will be 2 odd edged vertices. 
        Otherwise there is no eulerian path.
    */

    int eulerPath(int N, vector<vector<int>> graph)
    {
        // code here
        int pari = 0;
        int dispari = 0;
        
        for (int i=0; i<N; i++)
        {
            int conta = 0;
            for (int j=0; j<N; j++)
            {
                if (graph[i][j] == 1) conta++;
            }
            
            if (conta %2 != 0) dispari++;
            else               pari++;
        }
        
        if (dispari == 0 || dispari == 2)  return 1;
        
        return 0;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j = 0;j < N;j++)
                cin>>graph[i][j];
        
        Solution ob;
        cout<<ob.eulerPath(N, graph)<<"\n";
    }
    return 0;
}
// } Driver Code Ends