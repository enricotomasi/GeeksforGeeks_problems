//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int setBit(int N)
    {
        // Write Your Code here
        string bin_temp = std::bitset<32>(N).to_string();
        string bin = "";
        
        bool iniziato = false;
        for (char c : bin_temp)
        {
            if (iniziato)
            {
                bin+=c;
            }
            else
            {
                if (c != '0')
                {
                    iniziato = true;
                    bin += c;
                }
                
            }
        }
        
        int pos = -1;
        int n = bin.length();
        for (int i=n-1; i>=0; i--)
        {
            if (bin.at(i) != '1')
            {
                pos = i;
                break;
            }
        }
        

        if (pos <0) return N;
        
        string ans = "";
        
        for (int i=0; i<n; i++)
        {
            if (i == pos) ans += '1';
            else ans += bin.at(i);
        }
        

        return stoi(ans,0,2);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.setBit(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends