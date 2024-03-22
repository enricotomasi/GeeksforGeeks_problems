//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    /*
        1. Concept of Minheap will come into play
        2. Maintain a Minheap of size K, thus heap will contrain minimum element at the top in that pile size.
           Remove top element and insert and new element from input array. 
           Thus follow this procedure.
    
    */
    
    vector<int> kthLargest(int k, int arr[], int n)
    {
        // code here
        priority_queue<int, vector<int>, greater<int>> q;
        vector<int> ans;
        
        for (int i = 0; i < n; i++)
        {
            q.push(arr[i]);
            
            if (q.size() < k)
            {
                ans.push_back(-1);
            }
            else
            {
                while (q.size() > k)
                {
                    q.pop();
                }
                
                ans.push_back(q.top());
            }

        }
         
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k,n;
        cin>>k>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];

        Solution ob;
        vector<int> v = ob.kthLargest(k,arr,n);
        for(int i : v)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
