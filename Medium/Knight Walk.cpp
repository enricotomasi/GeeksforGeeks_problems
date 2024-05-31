//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
public:
	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N)
	{
	    // Code here
	    queue<pair<int,int>> queue;
	    
        vector<vector<int>> chessboard(N, vector<int>(N, 0));
        
        queue.push({KnightPos[0] - 1, KnightPos[1] - 1});
        
        int ans = 0;
        
        while (!queue.empty())
        {
            int size =  queue.size();
            
            for (int k = 0; k < size; k++)
            {
                int x = queue.front().first;
                int y = queue.front().second;
                
                queue.pop();
                
                if (x == TargetPos[0] - 1 && y == TargetPos[1]-1)
                {
                    return ans;
                }
                
                if (x + 2 < N && y - 1 >= 0 && chessboard[x + 2][y - 1] == 0)
                {
                    queue.push({x + 2, y - 1});
                    chessboard[x + 2][y - 1] = 1;
                }
                
                if (x + 2 < N && y + 1 < N && chessboard[x + 2][y + 1] == 0)
                {
                    queue.push({x + 2, y + 1});
                    chessboard[x + 2][y + 1] = 1;
                }
                
                if (x + 1 < N && y + 2 < N && chessboard[x + 1][y + 2] == 0)
                {
                    queue.push({x + 1, y + 2});
                    chessboard[x + 1][y + 2] = 1;
                }
                
                if (x + 1 < N && y - 2 >= 0 && chessboard[x + 1][y - 2] == 0)
                {
                    queue.push({x + 1, y - 2});
                    chessboard[x + 1][y - 2] = 1;
                }
                
                if (x - 2 >= 0 && y - 1 >= 0 && chessboard[x - 2][y - 1] == 0)
                {
                    queue.push({x - 2, y - 1});
                    chessboard[x - 2][y - 1] = 1;
                }
                
                if (x - 2 >= 0 && y + 1 < N && chessboard[x - 2][y + 1] == 0)
                {
                    queue.push({x - 2, y + 1});
                    chessboard[x - 2][y + 1] = 1;
                }
                
                if (x - 1 >= 0 && y + 2 < N && chessboard[x - 1][y + 2] == 0)
                {
                    queue.push({x - 1, y + 2});
                    chessboard[x - 1][y + 2] = 1;
                }
                
                if (x - 1 >= 0 && y - 2 >= 0 && chessboard[x - 1][y - 2] == 0)
                {
                    queue.push({x - 1,y - 2});
                    chessboard[x - 1][y - 2] = 1;
                }
            }
            
            ans++;
        }
        
        return -1;
	    
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		vector<int>KnightPos(2);
		vector<int>TargetPos(2);
		int N;
		cin >> N;
		cin >> KnightPos[0] >> KnightPos[1];
		cin >> TargetPos[0] >> TargetPos[1];
		Solution obj;
		int ans = obj.minStepToReachTarget(KnightPos, TargetPos, N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
