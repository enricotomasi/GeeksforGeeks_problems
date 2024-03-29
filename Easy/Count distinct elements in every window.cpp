//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int> mappa;
        for(int i=0; i<k; i++) mappa[A[i]]++;
        
        vector<int> ans;
        ans.push_back(mappa.size());

        for(int i=k; i<n; i++)
        {  
            if(mappa[A[i-k]] > 1) mappa[A[i-k]]--;
            else                  mappa.erase(A[i-k]);
            
            mappa[A[i]]++;
            ans.push_back(mappa.size());
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends