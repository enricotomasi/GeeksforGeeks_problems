//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        int arrsort[n];
        
        for (int i=0; i<n; i++) arrsort[i] = arr[i];
        
        sort(arrsort, arrsort+n);
        
        unordered_map<int, int> posArr;
        for (int i=0; i<n; i++) posArr[arr[i]-1] = i;
        
        unordered_map<int, int> posSort;
        for (int i=0; i<n; i++) posSort[arrsort[i]-1] = i;
        
        //for (int i=0; i<n; i++) cout << posArr[i] << " ";
        //cout << endl;
        
        //for (int i=0; i<n; i++) cout << posSort[i] << " ";
        //cout << endl;
        
        for (auto it : posArr)
        {
            if (abs(it.second - posSort[it.first]) >k) return "No";
        }
        
        return "Yes";
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}
// } Driver Code Ends