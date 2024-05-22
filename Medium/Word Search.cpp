//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
public:
    bool rec(int x, int y, int n, int m, int pos, vector<vector<char>>& board, string word) 
    {
        if (pos == word.size())
        {
            return true;
        }
        
        if (x < 0 || y < 0 || x == n || y == m || board[x][y] != word[pos])
        {
            return false;
        }
        
        char temp = board[x][y];
        
        board[x][y] = ' ';
        
        int a = rec(x - 1, y    , n, m, pos + 1, board, word);
        int b = rec(x    , y - 1, n, m, pos + 1, board, word);
        int c = rec(x    , y + 1, n, m, pos + 1, board, word);
        int d = rec(x + 1, y    , n, m, pos + 1, board, word);
        
        board[x][y] = temp;
        
        return a || b || c || d;
    }
    

    bool isWordExist(vector<vector<char>>& board, string word)
    {
        // Code here
        int n = board.size();
        int m = board[0].size();
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++) 
            {
                if (board[i][j] == word[0])
                {
                    if (rec(i, j, n, m, 0, board, word)) 
                    {
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends
