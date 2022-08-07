//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{   
public:
    bool checkTogether(string str)
    {
        // Write your code here
        bool firstzero = false;
        bool finishzero = false;
        
        for (char c: str)
        {
            if (firstzero)
            {
                if (finishzero)
                {
                    if (c=='0') return false;
                }
                else
                {
                    if (c=='1') finishzero = true;
                }
            }
            else
            {
                if (c=='0') firstzero = true;
            }
        }
        
        return firstzero;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        Solution ob;
        bool ans = ob.checkTogether(str) ;
        
        if(ans){
            cout<< "YES" <<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
// } Driver Code Ends