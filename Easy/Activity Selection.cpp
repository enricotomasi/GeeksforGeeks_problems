//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        int ans = 1;
        vector<pair<int,int>> vettore;
        
        for (int i=0; i<n; i++)
        {
            vettore.push_back({end[i], start[i]});
        }
        
        sort(vettore.begin(), vettore.end());
        
        int fine = vettore[0].first;
        
        for (int i=1; i<n; i++)
        {
            if (vettore[i].second>fine)
            {
                ans++;
                fine = vettore[i].first;
            }
        }
        
        return ans;
        
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}

// } Driver Code Ends