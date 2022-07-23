//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void printTriangleDownwards(string str)
    {
        // Write Your Code here
        int n = str.length();
        
        for (int i=0; i<n; i++)
        {
            int limit = n-i-1;
            int temp = 0;
            for (int j=0; j<n; j++)
            {
                if (j<limit) cout << ".";
                else
                {
                    cout << str.at(temp);
                    temp++;
                }
            }
            
            cout << endl;
            
        }
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        Solution ob;
        ob.printTriangleDownwards(str);
    }
    return 0;
}
// } Driver Code Ends