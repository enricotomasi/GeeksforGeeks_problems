//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals)
    {
         // Code here
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> ans;
        ans.push_back({intervals[0][0], intervals[0][1]});
         
        for (int i = 1; i < n; i++)
        {
            vector<int> el = ans.back();
            
            if (el[1] >= intervals[i][0])
            {
                if (el[1] < intervals[i][1])               
                {
                    el[1] = intervals[i][1];
                    ans.pop_back();                
                    ans.push_back(el);
                }
            }
            
            else
            {
                ans.push_back({intervals[i][0], intervals[i][1]});
            }
         }
         
         
         return ans;
         
    }

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends
