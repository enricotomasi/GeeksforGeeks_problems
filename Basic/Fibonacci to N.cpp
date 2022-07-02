// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    vector <int> nFibonacci(int N)
    {
        //code here
        
        vector<int> ans;
        
        ans.push_back(0);

        int a = 1;
        int b = 0;
        int fibo = 0;
        
        while (fibo <= N)
        {
            fibo = a + b;
            if (fibo <= N) ans.push_back(fibo);
            a = b;
            b = fibo;
        }
       
        return ans;
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        vector <int> ans=ob.nFibonacci(N);
        for(int u:ans)
         cout<<u<<" ";
        cout<<"\n"; 
    }
}  // } Driver Code Ends