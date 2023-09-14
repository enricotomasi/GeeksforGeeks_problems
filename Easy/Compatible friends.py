//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
int findDifference(int a1[], int a2[], int n);

// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a1[n],a2[n];
        for(int i=0;i<n;i++){
            cin>>a1[i];
        }
        for(int i=0;i<n;i++){
            cin>>a2[i];
        }
    cout << findDifference(a1, a2, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends



int findDifference(int a1[], int a2[], int n)
{
    //Your code here
    int ans = 0;
    
    for (int i = 0; i < n; i++)
    {
       int j = i + 1;
       while (a1[i] != a2[i])
       {
           swap(a1[i], a1[j]);
           j++;
           ans++;
       }
   }
   
   return ans;
}