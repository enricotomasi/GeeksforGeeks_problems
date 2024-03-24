//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{

    public:
        int closestToZero(int arr[], int n)
        {
            // your code here 
            sort(arr, arr + n);
            int start = 0;
            int end = n - 1;
            
            int ans = INT_MAX;
            
            while (start < end)
            {
                int temp = arr[start] + arr[end];
                
                if (temp == 0) return 0;
                
                if (abs(ans) > abs(temp))
                {
                    ans = temp;
                }
                else if (abs(ans) == abs(temp))
                {
                    ans = max(ans, temp);
                }
                
                if (temp > 0) end--;
                else          start++;
            }
            
            
            return ans;
            
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}
// } Driver Code Ends