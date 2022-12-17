//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int n = a.size();
        int ans = a[n/2];
        
        int inizio = n/2;
        int fine = n-1;
        
        while (inizio <= fine)
        {
            int pivot = (inizio+fine) /2;
            if (ans <= a[pivot])
            {
                ans = a[pivot];
                inizio = pivot +1;
            }
            else fine = pivot -1;
        }
        
        return ans;
        
    }
};



//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}


// } Driver Code Ends