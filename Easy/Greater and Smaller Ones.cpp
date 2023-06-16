//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Geeks
{
  public:
  
  static void greaterKSorted(vector<int>&arr, int k)
  {
      sort(arr.begin(), arr.end());
      set<int> s;
      
      for (auto it: arr) s.insert(it);
      
      int conta = 0;
      for (auto it : s)
      {
          if (it >= k)
          {
              cout << it << " ";
              conta++;
          }
      }
      
      if (conta == 0)
      {
          cout << "-1";
      }

  }
  
  static void smallerKSorted(vector<int>&arr, int k) 
  {
      sort(arr.begin(), arr.end());
      
      set<int> s;
      
      for (auto it: arr) s.insert(it);
      
      
      int conta = 0;
      for (auto it : s)
      {
          if (it < k)
          {
              cout << it << " ";
              conta++;
          }
      }
      
      if (conta == 0)
      {
          cout << "-1";
      }
  }
  
};

//{ Driver Code Starts.
int main() {
    
    int t; 
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n;
        cin >> k;
        
        vector<int>arr;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            arr.push_back(x);
        }
        Geeks obj;
        obj.greaterKSorted(arr, k);
        cout<<endl;
        obj.smallerKSorted(arr, k);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends