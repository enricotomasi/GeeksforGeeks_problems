//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n,m;
    	cin>>n>>m;
    	int a[MAX][MAX];
    	for(int i=0;i<n;i++)
    	for(int j=0;j<m;j++)
    	cin>>a[i][j];
    	vector<vector<int>> vec = uniqueRow(a,n,m);
    	for(int i = 0;i<vec.size();i++){
    	    for(int x : vec[i]){
    	        cout<<x<<" ";
    	    }
    	    cout<<"$";
    	}
    	cout<<endl;
    }
}

// } Driver Code Ends


/*You are required to complete this function*/
vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
{
    //Your code here
    set<string> mappa;
    vector<string> stringhe;
  
    for (int i=0; i<row; i++)
    {
        string riga = "";
        for (int j=0; j<col; j++)
        {
            riga += to_string(M[i][j]);
        }
        mappa.insert(riga);
        stringhe.push_back(riga);
    }
    
    vector<vector<int>> ans;
    for (auto it : stringhe)
    {
        auto p = find(mappa.begin(), mappa.end(), it);
        if ( p != mappa.end())
        {
            mappa.erase(p);
            vector<int> temp;
            for (char c : it)
            {
                string s = "";
                s+=c;
                temp.push_back(stoi(s));
            }
            ans.push_back(temp);
        }
    }
   
    
    return ans;
}