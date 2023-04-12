
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:

    int bs(vector<int> &arr, int val, int n)
    {
        int basso = n/2;
        int alto = n-1;
        int ans = -1;
        
        while (basso <= alto)
        {
            int mezzo = (basso + alto) /2;
            if (arr[mezzo] * 5 <= val)
            {
                ans = mezzo;
                basso = mezzo + 1;
            }
            else alto = mezzo - 1;
        }
        
        return ans;
    }    
    
    int dominantPairs(int n,vector<int> &arr)
    {
        // Code here
        int ans = 0;
        sort(arr.begin() + n/2, arr.end());
        
        for (int i=0; i<n/2; i++)
        {
           int indice = bs(arr, arr[i],n);
           if (indice != -1)
           ans += indice - n/2 + 1;
           
       }
       
       return ans;
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends