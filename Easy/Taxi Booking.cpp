//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int minimumTime(int N, int cur, vector<int> &pos, vector<int> &time)
    {
        int ans = INT_MAX;

        
        for (int i=0; i<N; i++)
        {
            int temp = 0;
            
            if (cur < pos[i]) temp = pos[i] - cur;
            else              temp = cur - pos[i];
            
            // cout << i << "# posizione: " << pos[i] << " Distanza: " << temp;
            
            temp *= time[i];
            
            // cout << " x tempo (" << time[i] << ") = " << temp << endl;
            
            ans = min(ans, temp);
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N,cur;
        cin>>N>>cur;
        vector<int> pos(N),time(N);
        for(int i=0;i<N;i++){
            cin>>pos[i];
        }
        for(int i=0;i<N;i++){
            cin>>time[i];
        }
        Solution ob;
        cout<<ob.minimumTime(N,cur,pos,time)<<endl;
    }
}
// } Driver Code Ends