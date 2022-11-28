//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method */
    int findMaxDiff(int A[], int n)
    {
        //Your code here
        int ans = 0;
        int mappa[n] = {};
        stack<int> st;
        
        for(int i=0; i<n; i++)
        {
            while(!st.empty() && A[st.top()] > A[i])
            {
                ans = max(ans, abs(mappa[st.top()] - A[i]));
                st.pop();
            }
            
            if (!st.empty()) 
            {
                if (A[st.top()] == A[i]) mappa[i] = mappa[st.top()];
                else                     mappa[i] = A[st.top()];
            }
            st.push(i);
        }
        
        while(!st.empty())
        {
            ans = max(ans, mappa[st.top()]);
            st.pop();
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++)
   	cin>>a[i];
   	Solution ob;
   	cout<<ob.findMaxDiff(a,n)<<endl;
   }
    return 0;
}



// } Driver Code Ends