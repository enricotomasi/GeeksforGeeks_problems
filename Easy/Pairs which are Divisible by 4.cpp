//{ Driver Code Starts
// C++ Program to count pairs whose sum divisible
// by '4'
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int count4Divisibiles(int arr[], int n)
    {
        // Complete the function
        int ans = 0;
        
        int freq[4] = {};
        
        for (int i=0; i<n; i++)
        {
            freq[(arr[i]%4)]++;
        }
        
        ans += ((freq[0] * (freq[0]-1)) /2);
        ans += ((freq[2] * (freq[2]-1)) /2);
        ans += (freq[1] * freq[3]);
        
        return ans;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
         cin>>arr[i];
        Solution ob;
        cout << ob.count4Divisibiles(arr, n)<<endl;
    }
 
    return 0;
}
// } Driver Code Ends