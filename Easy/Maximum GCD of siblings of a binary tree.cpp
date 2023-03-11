//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    int maxBinTreeGCD(vector<vector<int>> arr, int N) 
    {
        // code here
        bool coppia = false;
        
        sort(arr.begin(), arr.end());
        
        int ans = 0;
        vector<int> temp;
        int last = INT_MIN;
        
        int n=arr.size();

        for (int i=0; i<n; i++)
        {
            if (arr[i][0] != last && temp.size() > 0)
            {
                int g = 0;
                if (temp.size() >1)
                {
                    coppia = true;
                    g = __gcd(temp[0], temp[1]);
                }
                else
                {
                    g = __gcd(temp[0],1);
                }
                
                ans = max(ans, g);
                //cout << temp[0] << " " << temp[1] << " --- " << g << endl;
                
                temp.clear();
            }
            
            temp.push_back(arr[i][1]);
            last = arr[i][0];
        }
     
        if (temp.size() > 0)
        {
            int g = 0;
            if (temp.size() >1)
            {
                coppia = true;
                g = __gcd(temp[0], temp[1]);
            }
            else
            {
                g = __gcd(temp[0],1);
            }
            
            ans = max(ans, g);
            //cout << temp[0] << " " << temp[1] << " --- " << g << endl;
        }
 
        if (!coppia) return 0;
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,u,v;
        cin>>N;
        
        vector<vector<int>> arr;
        
        for(int i=0; i<N-1; i++)
        {
            cin>>u>>v;
            vector<int> edge;
            edge.push_back(u);
            edge.push_back(v);
            arr.push_back(edge);
        }

        Solution ob;
        cout << ob.maxBinTreeGCD(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends