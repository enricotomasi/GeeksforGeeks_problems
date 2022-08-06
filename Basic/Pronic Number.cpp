//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> pronicNumbers(int N)
    {
        // Write Your Code here
        vector<int> ans;
        
        int i=0;
        int j=1;
        while (i*j <=N)
        {
            ans.push_back(i*j);
            i++;
            j++;
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
        cin>>N;
        Solution ob;
        
        vector<int> ans = ob.pronicNumbers(N);
        for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends