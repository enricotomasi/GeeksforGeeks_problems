//{ Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
class Solution
{
    /*
        The frequency of all the elements in A must be same as the frequency of all the elements in B. 
        If it isn't return -1.
        
        To find minimum number of operations, start matching from last characters of both strings.
        
        If last characters match, then our task reduces to n-1 characters.
        
        If last characters don’t match, then find the position of B’s mismatching character in A.
        
        The difference between two positions indicates that these many characters of A must be moved 
        before current character of A.
    
    
    */
    public:
    int transform (string A, string B)
    {
        //code here.
        if (A.length() != B.length())
        {
            return -1;
        }
        
        int aa[256] = { };
        for (auto c : A)
        {
            aa[c]++;
 
        }
        
        int ab[256] = { };
        for (auto c : B)
        {
            ab[c]++;
        }
        
        for (int i = 0; i < 256; i++)
        {
            if (aa[i] != ab[i])
            {
                return -1;
            }
        }
        

        int ans = 0;
        
        int pa = A.length() - 1;
        int pb = B.length() - 1;
        
        while (pa >= 0 && pb >= 0)
        {
            if (A[pa] == B[pb])
            {
                pa--;
                pb--;
            }
            else 
            {
                ans++;
                pa--;
            }
            
        }

        return ans;
    }
};


//{ Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}
// } Driver Code Ends