// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
  public:
    vector<int> kSmallestElements(int arr[], int n, int k)
    {
        // Complete the function
        int copia[n] = {};
       
	   for(int i = 0; i<n; i++)
	   {
           copia[i] = arr[i];
       }
       
	   sort(copia, copia+n);
       unordered_map<int, int> mappa;
       
       for(int i = 0; i<k; i++)
	   {
           mappa[copia[i]]++;
       }
       
	   vector<int> ans;
       
	   for(int i = 0; i<n; i++)
	   {
           if(mappa[arr[i]] > 0)
		   {
               mappa[arr[i]]--;
               ans.push_back(arr[i]);
           }
       }
       
	   return ans;
    }

};

// { Driver Code Starts.
int main() {
	
	int t; cin>>t;
	while(t--)
	{
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin >> arr[i];
	       
	    vector<int> ans;
	    Solution obj;
	    ans = obj.kSmallestElements(arr, n, k);
	    for(int i: ans)
	        cout << i << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends