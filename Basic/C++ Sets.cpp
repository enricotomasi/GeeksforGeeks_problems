//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
    public:
    vector<set<int>> setOperations(set<int> A, set<int> B)
    {
        // code here
        vector<set<int>> ans;
        
        // Union
        vector<int> tempu;
        set<int> tempus;
        
        set_union(A.begin(), A.end(), B.begin(), B.end(), back_inserter(tempu));
        
        tempus.insert(tempu.begin(), tempu.end());
        ans.push_back(tempus);
        
        // Difference
        vector<int> tempd;
        set<int> tempds;
        
        set_difference(A.begin(), A.end(), B.begin(), B.end(), back_inserter(tempd));
        
        if (tempd.empty()) tempd.push_back(0);
        
        tempds.insert(tempd.begin(), tempd.end());
        ans.push_back(tempds);
    
        // Intersect
         vector<int> tempi;
        set<int> tempis;
        
        set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(tempi));
        
        if (tempi.empty()) tempi.push_back(0);
        
        tempis.insert(tempi.begin(), tempi.end());
        ans.push_back(tempis);
            
     
        // --------
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        set<int> A, B;
        int x;
        for(int i = 0;i < N;i++){
            cin>>x;
            A.insert(x);
        }
        for(int i = 0;i < M;i++){
            cin>>x;
            B.insert(x);
        }
        
        Solution ob;
        vector<set<int>> result = ob.setOperations(A, B);
        for(int i = 0;i < 3;i++){
            for(auto &it: result[i])
                cout<<it<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends