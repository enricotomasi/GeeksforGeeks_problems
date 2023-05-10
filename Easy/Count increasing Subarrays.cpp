//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:

	int countIncreasing(int arr[], int n)
	{
	    // code here
	    
	    /*
	        Hint:
	        The idea is based on fact that a sorted subarray of length ‘len’ adds len*(len-1)/2 to result. 
	        For example, {10, 20, 30, 40} adds 6 to the result.
	    */
	    
	    vector<int> lunghezze;
	    
	    int temp = 1;
	    int last = arr[0];
	    
	    for (int i=0; i<n-1; i++)
	    {
	        //cout << arr[i] << ", " << arr[i+1] << endl;
	        if (arr[i] < arr[i+1])
	        {
	            // cout << "aggiungo a temp" << endl;
	            temp++;
	        }
	        else
	        {
	            //cout << temp << endl;
	            if (temp > 1) lunghezze.push_back(temp);
	            temp = 1;
	        }
	    }
	    
	    if (temp > 1) lunghezze.push_back(temp);
	    
	    int ans = 0;
	    for (auto it : lunghezze)
	    {
	        ans += (it * (it-1) / 2);
	    }

	    return ans;

	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countIncreasing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends