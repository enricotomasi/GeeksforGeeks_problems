//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    static bool comp(pair<int, int> &a, pair<int, int> &b)
    {
        if (a.second == b.second)
        {
            return a.first < b.first;
        }
        
        return a.second > b.second;
    }
    
    vector<int> sortByFreq(int arr[], int n)
    {
        //Your code here
        map<int, int> m;
        
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
        }
        
        vector<pair<int, int>> v;
        
        for (auto it : m)
        {
            pair<int, int> p = {it.first, it.second};
            v.push_back(p);
        }
        
        sort(v.begin(), v.end(), comp);
        
        vector<int> ans;
        
        for (auto it : v) 
        {
            for (int i = 0; i < it.second; i++)
            {
                ans.push_back(it.first);
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends
