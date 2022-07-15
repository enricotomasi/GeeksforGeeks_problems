// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    string findMissing(int arr[], int n)
    {
       string ans="";
       sort(arr,arr+n);
       
       int piccolo=0;
       int grande=0;
       int conta=0;
       
       for(int i=0;i<n;i++)
       {
    	   grande = arr[i]-1;
    	   
    	   if(grande-piccolo>0)
    	   {
    		   ans += to_string(piccolo) + "-" + to_string(grande) + " ";
    		   conta++;
    	   }
    	   
    	   if(grande-piccolo==0)
    	   {
    		   ans+= to_string(piccolo) + " ";
    		   conta++;
    	   }
    	   
    	   piccolo=arr[i]+1;
       }
      
       if(conta==0) ans = "-1";
       
       return ans;
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
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends