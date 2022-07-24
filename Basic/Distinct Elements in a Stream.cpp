//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
  public:
    vector<int> maxDistinctNum(int arr[], int n)
    {
        // Complete the function
        vector<int> ans;
        int mappa[1000001] = {};
        int dist = 0;
        
        for (int i=0; i<n; i++)
        {
            int val = abs(arr[i]);
            
            if (arr[i] >0) // aggiunta
            {
                if (mappa[val] >= 1) // c'è già un elemento
                {
                    mappa[val]++;
                }
                else // non c'è nessun elemento
                {
                    dist++;
                    mappa[val]++;
                }
            }
            else // eliminazione
            {
                if (mappa[val] != 0)
                {
                    if (mappa[val] > 1) // c'è più di un elemento
                    {
                        mappa[val]--;
                    }
                    else // c'è un solo elemento;
                    {
                        if (dist >0) dist--;
                        if (mappa[val] > 0) mappa[val]--;
                    }
                }
                
                    
            }
            // cout << "#" << i << " " << arr[i] << " " << mappa[val] << endl;

            ans.push_back(dist);
            
        }
    
    return ans;
    }

};

//{ Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i < n ; i++){
            cin >> a[i];
        }
        vector<int> v;
        Solution obj;
        v = obj.maxDistinctNum(a, n);
        for(auto i : v)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends