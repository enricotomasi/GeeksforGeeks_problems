//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        int n = v.size();
        
        int primo = -1;
        int ultimo = -1;
        
        for (int i=0; i<n; i++)
        {
            if (v[i] == x)
            {
                primo = i;
                break;
            }
        }
        
        if (primo < 0) return {-1, -1};
        
        for (int i=n-1; i>=0; i--)        
        {
            if (v[i] == x)
            {
                ultimo = i;
                break;
            }
        }
        
        
        return {primo, ultimo};
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends