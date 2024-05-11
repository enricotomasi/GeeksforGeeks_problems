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
    /*
        Sort the orders according to the descending order of abs(a[i] - b[i]). 
        Then assign orders to Rahul or Ankit so that they get maxTip from ith person.
    */
    
    long long maxTip(int n, int x, int y, vector<int> &a, vector<int> &b) 
    {
        // code here
        vector<pair<int, int>> diff;
        
        for (int i = 0; i < n; i++)
        {
            diff.push_back({abs(a[i] - b[i]), i});
        }
        
        sort(diff.rbegin(), diff.rend());
        
        //for (auto it : diff) cout << it.first << " " << it.second << endl;
        
        long long ans = 0;
        
        for (auto it : diff)
        {
            int i = it.second;
            
            //cout << endl << "index: " << i << "   a[i]: " << a[i] << " b[i]: " << b[i] << endl;
            //cout << "x: " << x << " y: " << y << endl;
            
            if (x == 0)
            {
                ans += b[i];
                y--;
                //cout << "x == 0, take b" << endl;
            }
            else if (y == 0)
            {
                //cout << "y == 0, take a" << endl;
                ans += a[i];
                x--;
            }
            else
            {
                //cout << "x != 0 && y != 0" << endl;
                if (a[i] > b[i])
                {
                    //cout << "a[i] > b[i], take a" << endl;
                    ans += a[i];
                    x--;
                }
                else
                {
                    //cout << "a[i] < b[i], take a" << endl;
                    ans += b[i];
                    y--;
                }
            }
            
            //cout << "ans: " << ans << endl;
            
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
        
        
        int x;
        scanf("%d",&x);
        
        
        int y;
        scanf("%d",&y);
        
        
        vector<int> a(n);
        Array::input(a,n);
        
        
        vector<int> b(n);
        Array::input(b,n);
        
        Solution obj;
        long long res = obj.maxTip(n, x, y, a, b);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends