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
    int minimizeDifference(int n, int k, vector<int> &arr)
    {
        // code here
        vector<int> a(n); 
        a[0] = arr[0];
        
        vector<int> b(n);
        b[n-1] = arr[n-1];
        
        vector<int> c(n);
        c[0] = arr[0];
        
        vector<int> d(n);
        d[n-1] = arr[n-1];
        
        for (int i = 1; i < n; i++)
        {
            a[i] = max(a[i - 1], arr[i]);
            c[i] = min(c[i - 1], arr[i]);
        }
        
        for (int i = n - 2 ; i >= 0; i--)
        {
            b[i] = max(b[i + 1], arr[i]);
            d[i] = min(d[i + 1], arr[i]);
        }
        
        int ans = INT_MAX;
        
        for (int i = k; i <= n; i ++)
        {
            int temp_max = INT_MIN;
            if (i < n)
            {
                temp_max = max(temp_max, b[i]);
            }
            
            if (i - k - 1 >= 0)
            {
                temp_max = max(temp_max, a[i - k - 1]);
            }
            
            int temp_min = INT_MAX;
            if (i < n)
            {
                temp_min = min(temp_min, d[i]);
            }
            
            if (i - k - 1 >=0)
            {
                temp_min = min(temp_min, c[i - k - 1]);
            }
            
            ans = min(ans, temp_max - temp_min);
        }
        
        return ans;
        
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        
        int k;
        scanf("%d",&k);
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        Solution obj;
        int res = obj.minimizeDifference(n, k, arr);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends
