//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<long long> printSeries(int N)
    {
        // Write your code here
       vector<long long> ans;
        
        ans.push_back(1);
        if (N<=1) return ans;
        
        ans.push_back(2);
        if (N<=2) return ans;
        
        ans.push_back(5);
        if (N<=3) return ans;
        
        long long last2 = 1;
        long long last1 = 2;
        long long last0 = 5;
        
        
        for (int i=3; i<=N; i++)
        {
            long long aggiungi = last2+last1+last0;
            ans.push_back(aggiungi);
            last2 = last1;
            last1 = last0;
            
            last0 = aggiungi;
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
        vector<long long> a = ob.printSeries(N);
        
        for(long long i=0;i<N;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends