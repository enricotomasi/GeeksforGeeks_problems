//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*Function to count subset with even sum
* arr : array input
* N : size of array
*/
class Solution
{
  public:
    int countSumSubsets(int arr[], int N)
    {
        // Your code here
        
        int pari = 0;
        int dispari = 0;
        
        for (int i=0; i<N; i++)
        {
            if ((arr[i] %2) == 0) pari++;
            else                  dispari++;
        }
        
        int primo   = (1 << pari) - 1;
        int secondo = (1 << dispari -1) - 1;
        
        if      (pari == 0)    return secondo;
        else if (dispari == 0) return primo;
        else                   return primo + secondo + primo * secondo;
        
    }
};

//{ Driver Code Starts.

// Driver code to test columnWithMaxZeros function
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    
	    int arr[N];
	    
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	            cin >> arr[i];
	        }
	    Solution obj;
	    cout << obj.countSumSubsets(arr, N) << endl;
	}
	
	return 0;
}
// } Driver Code Ends