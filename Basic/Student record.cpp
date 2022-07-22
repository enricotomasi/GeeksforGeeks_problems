//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    string studentRecord(vector<vector<string>> S, int N) 
    {
        // code here
        
        string ans = "";
        int media = -1;
        
        for (int i=0; i<N; i++)
        {
            
            int a = stoi(S[i][1]);
            int b = stoi(S[i][2]);
            int c = stoi(S[i][3]);
            
            int mediaTemp = floor(a+b+c)/3;
            
            if (mediaTemp > media)
            {
                media = mediaTemp;
            }
        }
        
        for (int i=0; i<N; i++)
        {
            int a = stoi(S[i][1]);
            int b = stoi(S[i][2]);
            int c = stoi(S[i][3]);
            
            int mediaTemp = floor(a+b+c)/3;
            
            if (mediaTemp == media) ans += S[i][0] + " ";
        }
        
        ans += to_string(media);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;

        string a,b,c,d;
        
        vector<vector<string>> S(N);
        
        for(int i=0; i<N; i++)
        {
            cin>>a>>b>>c>>d;
            S[i].push_back(a);
            S[i].push_back(b);
            S[i].push_back(c);
            S[i].push_back(d);
        }
        
        Solution ob;
        cout << ob.studentRecord(S,N) << endl;
    }
    return 0;
}
// } Driver Code Ends