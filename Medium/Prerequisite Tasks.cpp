//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

/*
    1 Consider this problem as a Graph problem. 
    All tasks are nodes of the graph and if task u is a prerequisite of task v,
    we will add a directed edge from node u to node v.

    2 Find if a cycle exists in the directed graph.
    No topological ordering exists in case of a cycle and it will be impossible to do all the tasks.

*/

public:
	bool isPossible(int N, int P, vector<pair<int, int>> &prerequisites)
	{
	    // Code here
	    vector<int> v[N];
	    
	    for (auto it : prerequisites)
	    {
            v[it.first].push_back(it.second);
	    }
	       
	    int temp[N] = { 0 };
	    
	    for (int i = 0; i < N; i++)
	    {
	        for (auto it : v[i])
	        {
	            temp[it]++;
	        }
	    }
	    
	    queue<int> q;
	    
	    for (int i = 0; i < N; i++)
	    {
	        if (temp[i] == 0)
	        {
	            q.push(i);
	        }
	    }
	    
	    int c = 0;
	    
	    while (!q.empty())
	    {
	        int n = q.front();
    	    q.pop();
	        
	        c++;
	        
	        for (auto it : v[n])
	        {
	            temp[it]--;
	            
	            if (temp[it] == 0)
	            {
	                q.push(it);
	            }
	            
	        }
	    }
	    
	    if (c == N)
	    {
	        return true;
	    }
	    
	    return false;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends
