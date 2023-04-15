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
    int totalTime(int n, vector<int> &arr, vector<int> &time)
    {
        // code here
        int ans = 0;
        unordered_set<int> usciti;
        usciti.insert(arr[0]);
        
        for (int i=1; i<n; i++)
        {
            //cout << i << ": arr[i]: " << arr[i];
            if (usciti.find(arr[i]) == usciti.end())
            {
                //cout << " *** Diverso, aggiungo 1";
                ans++;
            }
            else
            {
                //cout << " *** Uguale, aggiungo time[arr[i]-1]: " << time[arr[i]-1];
                ans += time[arr[i]-1];
            }
            usciti.insert(arr[i]);
            
            //cout << " ### ans: " << ans << endl;
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
        
        
        vector<int> arr(n);
        Array::input(arr,n);
        
        
        vector<int> time(n);
        Array::input(time,n);
        
        Solution obj;
        int res = obj.totalTime(n, arr, time);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends