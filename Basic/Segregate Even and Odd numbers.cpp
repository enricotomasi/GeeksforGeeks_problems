 
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void segregateEvenOdd(int arr[], int n)
	{
	    // code here
	    // Separa i numeri fra pari e dispari
	    // prima i pari in ordine screscente, poi i dispari in ordine crescente
	    
	    vector<int> pari;
	    vector<int> dispari;
	    
	    for (int i=0; i<n; i++)
	    {
	        if (arr[i] %2 == 0) pari.push_back(arr[i]);
	        else dispari.push_back(arr[i]);
	    }
	    
	    sort(pari.begin(), pari.end());
	    sort(dispari.begin(), dispari.end());
	    
	    int k = pari.size();
	    
	    for (int i=0; i<k; i++)
	    {
	        arr[i] = pari[i];
	    }
	    
	    
	    int b = 0;
	    for (int i=k; i<n; i++)
	    {
	        arr[i] = dispari[b];
	        b++;
	    }
	    
	    
	}
};

// { Driver Code Starts.

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
        ob.segregateEvenOdd(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends