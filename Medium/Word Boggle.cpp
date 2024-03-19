//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:
	bool rec(vector<vector<char>> &board, int x, int y, int n, int m, vector<vector<int>> &vis, int pos, string word)
    {
        if (pos == word.length())
        {
            return true;
        }
        
        if (x >= 0 and y >= 0 and x < n and y < m)
        {
            vis[x][y] = 1;
            
            int arr1[] = {-1, -1, -1,  0, 0,  1, 1, 1 };
            int arr2[] = {-1,  0,  1, -1, 1, -1, 0, 1 };
            
            for (int i = 0; i < 8; i++)
            {
                int row = x + arr1[i];
                int col = y + arr2[i];
                
                if (row >= 0 && row < n && col >=0 && col < m && vis[row][col] == 0 && board[row][col] == word[pos])
                {
                    if (rec(board, row, col, n, m, vis, pos + 1, word))
                    {
                        return true;
                    }
                }
            }
        }
        
        
        vis[x][y] = 0;
        return false;
    }
	
	
	vector<string> wordBoggle(vector<vector<char>> &board, vector<string>& dictionary)
	{
	    // Code here
	    int n = board.size();
        int m = board[0].size();
        
        set<string> ansset;
        
        for (auto word : dictionary)
        {
            vector<vector<int>> vis(n, vector<int>(m, 0));
            

            for (int i = 0 ; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (board[i][j] == word[0])
                    {
                        if (rec(board, i, j, n, m, vis, 1, word))
                        {   
                            if (ansset.find(word) == ansset.end())
                            {
                                ansset.insert(word);
                            }
                        }
                    }
                }
            }
        }
        
        vector<string> ans;
        
        for (auto it : ansset)
        {
            ans.push_back(it);
        }

        return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> dictionary;
        for (int i = 0; i < N; ++i) {
            string s;
            cin >> s;
            dictionary.push_back(s);
        }
        
        int R, C;
        cin >> R >> C;
        vector<vector<char> > board(R);
        for (int i = 0; i < R; i++) {
            board[i].resize(C);
            for (int j = 0; j < C; j++) cin >> board[i][j];
        }
        Solution obj;
        vector<string> output = obj.wordBoggle(board, dictionary);
        if (output.size() == 0)
            cout << "-1";
        else {
            sort(output.begin(), output.end());
            for (int i = 0; i < output.size(); i++) cout << output[i] << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends
