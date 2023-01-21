//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int minimizeSum(int N, vector<int> arr)
    {
        // code here
        int ans = 0;
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for (auto it : arr) pq.push(it);
        
        while (!pq.empty())
        {
            int somma = 0;
            somma += pq.top();
            pq.pop();
            
            if (!pq.empty())
            {
                somma += pq.top();
                pq.pop();
                pq.push(somma);
                ans += somma;
            }
        }
        
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends