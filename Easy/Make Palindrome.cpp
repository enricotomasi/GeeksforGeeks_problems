//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    bool makePalindrome(int n, vector<string> &arr)
    {
        // Code here
        unordered_map<string,int> mappa;
        
        for (int i=0; i<n; i++)
        {
            string stringa = arr[i];
            
            string rev = stringa;
            reverse(rev.begin(), rev.end());
            
            if (mappa.find(rev) != mappa.end()) mappa.erase(rev);
            else                                mappa[stringa] = 1;
        }
        
        if (mappa.size() <= 0) return true;
        
        if (mappa.size() == 1)
        {
            for (auto i : mappa)
            {
                string stringa = i.first;
                
                string rev = i.first;
                reverse(rev.begin(), rev.end());
                
                if (stringa == rev) return true;
                else                return false;
            }
        }
        return false;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends