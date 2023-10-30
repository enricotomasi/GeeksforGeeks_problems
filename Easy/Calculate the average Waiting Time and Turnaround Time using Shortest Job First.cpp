//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

class Solution
{
    public:
    vector<double>averageTimes(vector<int>arrivalTime, vector<int>burstTime, int n)
    {
        //Write your code here
        vector<vector<int>> map;
        
        for (int i=0; i<n; i++)
        {
            map.push_back({arrivalTime[i], burstTime[i]});
        }
		
        sort(map.begin(), map.end());
		
        priority_queue<pair<int,int>> q;
		
        int t = 0;
        int i = 0;
        
        double wait = 0;
        double comp = 0;
        
        while (i != n || !q.empty()) 
        {
            if (q.empty() && t < map[i][0]) t = map[i][0];
                
            while (i<n && map[i][0] <= t) 
            {
                auto v = map[i++];
                int at = v[0], bt = v[1];
                q.push({-bt, at});
            }
            
            auto temp = q.top();
            q.pop();
            
            wait += t - temp.second;
            comp += t - temp.first - temp.second;
            
            t -= temp.first;
        }
        
        return {int((wait / n * 100) + 0.5) / 100.0, int((comp / n * 100) + 0.5) / 100.0};
        
        
        
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arrivalTime(n), burstTime(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arrivalTime[i];
	    }
	    for(int i = 0 ; i < n; i++){
	        cin >> burstTime[i];
	    }
	    Solution ob;
	    vector<double> ans = ob.averageTimes(arrivalTime, burstTime, n);
	    for(auto it : ans){
	        cout << it <<" ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends