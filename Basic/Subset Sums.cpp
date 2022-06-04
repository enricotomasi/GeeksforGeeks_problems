 
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

    vector<int>ans;

    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        risolvi (arr,0,0);
        sort(ans.begin(),ans.end());
        
        return ans;
    }
    
    void risolvi (vector<int>arr, int somma, int i) 
    {
        if (i==arr.size())
        {
            ans.push_back(somma);
            return;
        }
        
        risolvi(arr, somma, i+1);
        risolvi(arr, somma+arr[i], i+1);
        
    }
    
    
    
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends