// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{

  public:
    int FindElement(int arr[], int N)
    {
        // Your code here
        map<int,int> massimo;
        map<int,int> minimo;
        
        int temp = arr[0];
        massimo[arr[0]] = 0;
        for (int i=1; i<N; i++)
        {
            if (temp < arr[i-1]) temp = arr[i-1];
            massimo[arr[i]] = temp;
        }
        
        temp = arr[N-1];
        minimo[temp] = temp+1;
        
        for (int i=N-2; i>=0; i--)
        {
            if (temp>arr[i+1]) temp = arr[i+1];
            minimo[arr[i]] = temp;
        }
        
        
        for (int i=0; i<N; i++)
        {
            if (massimo[arr[i]]<arr[i] && minimo[arr[i]] > arr[i]) return arr[i];
        }
        
        return -1;

    }
};


// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i) cin >> a[i];

        Solution ob;
        cout << ob.FindElement(a, n);
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends