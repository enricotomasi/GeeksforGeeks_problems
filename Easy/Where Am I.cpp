//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
  public:
    pair<int,char> whereAmI(vector<pair<char,int>>&Arr, int m)
    {
        // code here
        int direction = 0;
        
        vector<int> mappa(4, 0);
        
        for (auto it : Arr)
        {
            char mov = it.first;
            int dist = it.second;
            
            if      (direction == 0)
            {
                if      (mov == 'U') direction = 0;
                else if (mov == 'L') direction = 2;
                else if (mov == 'R') direction = 1;
                else if (mov == 'D') direction = 3;
            }
            else if (direction == 1)
            {
                if      (mov == 'U') direction = 1;
                else if (mov == 'L') direction = 0;
                else if (mov == 'R') direction = 3;
                else if (mov == 'D') direction = 2;
            }
            else if (direction == 2)
            {
                if      (mov == 'U') direction = 2;
                else if (mov == 'L') direction = 3;
                else if (mov == 'R') direction = 0;
                else if (mov == 'D') direction = 1;
            }
            else if (direction == 3)
            {
                if      (mov == 'U') direction = 3;
                else if (mov == 'L') direction = 1;
                else if (mov == 'R') direction = 2;
                else if (mov == 'D') direction = 0;
            }
            
            mappa[direction] += dist;
            
        }
        
        char ans1 = ' ';
        if      (direction == 0) ans1 = 'N';
        else if (direction == 1) ans1 = 'E';
        else if (direction == 2) ans1 = 'W';
        else if (direction == 3) ans1 = 'S';
        
        int ans0 = sqrt((mappa[0] - mappa[3]) * (mappa[0] - mappa[3]) + (mappa[1] - mappa[2]) * (mappa[1] - mappa[2]));
        
        return {ans0, ans1};
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin>>m;
        int m1=m;
        vector<pair<char,int>>Arr;
        while(m1--){
            char c;
            int d;
            cin>>c>>d;
            Arr.push_back({c,d});
        }
        Solution ob;
        pair<int,char>ans=ob.whereAmI(Arr,m);
        cout<<ans.first<<" "<<ans.second<<endl;
    }
    return 0;
}

// } Driver Code Ends