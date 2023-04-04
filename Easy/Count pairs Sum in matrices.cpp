//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution
{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	    vector<int> m1;
	    for (auto it : mat1)
	    {
	        for (auto it2 : it)
	        {
	            m1.push_back(it2);
	        }
	    }
	    
	    vector<int> m2;
	    for (auto it : mat2)
	    {
	        for (auto it2 : it)
	        {
	            m2.push_back(it2);
	        }
	    }
	    
	    n *= n;
	    
	    int j = n-1;
	    int ans = 0;
	    for (int i=0; i<n; i++)
	    {
	        while (j >= 0)
	        {
	            int prod = m1[i] + m2[j];
	            //cout << m1[i] << " + " << m2[j] << " = " << prod << endl;
	            if (prod == x)
	            {
	                //cout << "trovato!" << endl;
	                ans++;
	                break;
	            }
	            else if (prod < x)
	            {
	                //cout << "interrompo " << endl;
	                break;
	            }
	            j--;
	        }
	        //cout << endl;
	        
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.


int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}
// } Driver Code Ends