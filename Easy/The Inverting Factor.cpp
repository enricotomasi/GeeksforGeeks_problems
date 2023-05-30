//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find the minimum inverting factor 
int findMinimumInvertingFactor(int arr[], int N);

int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        
        cout << findMinimumInvertingFactor(arr, n);
        
        cout << endl;
        
    }

}


// } Driver Code Ends

int rev(int n)
{
    if (n <= 9) return n;
    
    int ans = 0;
    int cifre = log10(n);
    
    while (n)
    {
        int digit = n % 10;
        ans += digit * pow(10, cifre);
        
        //cout << digit << " " << cifre << " " << ans <<endl;

        cifre--;
        n /= 10;
    }
    
    return ans;
}

/*
    An efficient approach would be to precompute the reverse of each array element and store it in its reversed form only 
    (considering the case of trailing zeroes also). Now, to find the minimum inverting factor, sort the array in non-decreasing order.
    Since the array is sorted, the minimum absolute difference always occurs among any two adjacent numbers.
    
    Below is the implementation of the above approach.
*/

int findMinimumInvertingFactor(int arr[], int N) 
{ 
    // Complete the function 
    int ans = INT_MAX;
    for (int i=0; i<N; i++) arr[i] = rev(arr[i]);
    
    sort (arr, arr + N);
    
    for (int i=0; i<N-1; i++)
    {
        int inv = abs(arr[i] - arr[i+1]);
        ans = min(ans, inv);
    }
    
    
    return ans;
} 
