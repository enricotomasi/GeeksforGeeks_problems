//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
 
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution
{
  public:
    void SortedDuplicates(int n, vector<int> &arr)
    {
        // code here
        set<int> mappa;
        
        set<int> s;
        
        for (int i=0; i<n; i++)
        {
            if (mappa.find(arr[i]) != mappa.end()) s.insert(arr[i]);
            mappa.insert(arr[i]);
        }
        
        vector<int> ans;
        for (auto it : s) ans.push_back(it);
        
        sort(ans.begin(), ans.end());
        
        if (ans.size() > 0) for (auto it : ans) cout << it << " ";
        else                cout << "-1";
        cout << endl;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        
        obj.SortedDuplicates(n, arr);
        
    }
}

// } Driver Code Ends