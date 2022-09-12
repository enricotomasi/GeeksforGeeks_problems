//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
    vector<string> interestingPattern(int N)
    {
        // code here
        int lines = (N*2)-1;
        vector<string> ans;
        int arr[lines][lines];
        
        
        int primo = 0;
        int ultimo = lines-1;
        for (int i=N; i>0; i--)
        {
            for (int j=primo; j<=ultimo; j++)
            {
                arr[primo][j] = i;
                arr[j][primo] = i;
                arr[ultimo][j] = i;
                arr[j][ultimo] = i;
            }
            primo++;
            ultimo--;
        }
        

        for (int i=0; i<lines; i++)
        {
            string riga = "";            
            for (int j=0; j<lines; j++)
            {
                riga += to_string(arr[i][j]);
            }
            ans.push_back(riga);
        }
        
        
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

        Solution ob;
        vector<string> v = ob.interestingPattern(N);
        
        for(int i=0; i<v.size(); i++)
            cout<<v[i]<<endl;
    }
    return 0;
}
// } Driver Code Ends