//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

vector<int> getStarAndSuperStar(int arr[], int n);

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
        vector<int> ans = getStarAndSuperStar(arr, n);
        for (int i=1;i<ans.size();i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
        cout << ans[0] << "\n";
    }
    return 0;
}

// } Driver Code Ends


vector<int> getStarAndSuperStar(int arr[], int n)
{
    // code here   
    vector<int> ans;
    int star = arr[n-1];
    ans.push_back(star);
    
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>star)
        {
            ans.push_back(arr[i]);
            star = arr[i];
        }
   }
   
   int ss = INT_MIN;
   
   for(int i=0;i<n;i++)
   {
       ss = max(ss, arr[i]);
   }
   
   int c = count(arr, arr+n, ss);
 
   if(c >1) ss = -1; 
 
   ans.push_back(ss);
   reverse(ans.begin(), ans.end());
   
   return ans;
}