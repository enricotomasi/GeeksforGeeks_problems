//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution
{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n)
	{
	    // code here
	    int primo = arr[0];
	    int somma = 0;
	    
	    for (int i=1; i<n; i++)
	    {
	        int temp = somma + arr[i];
	        int tempSomma = max(somma, primo);
	        primo = temp;
	        somma = tempSomma;
	    }
	   
	    return max(somma, primo);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends