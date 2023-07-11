//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	long long minSum(vector<int> a, int N, int K)
	{
	    // code here
	    priority_queue<float> pq;
	    
	    for (auto it : a)
	    {
	        pq.push(it);
	    }
	    
	    for (int i=0; i<N; i++)
	    {
	        if (pq.empty()) return 0;
	        
	        float el = pq.top();
	        pq.pop();
	        
	        float perc = el / 10;
	        
	        if (perc > K)
	        {
	            el -= perc;
	        }
	        else
	        {
	            el -= K;
	        }
	        
	        //cout << el << " ";
	        
	        if (el > 0)
            {
	            pq.push(el);
            }
	    }
	    
	    float somma = 0;
	    
	    while (!pq.empty())
	    {
	        //cout << pq.top() << " ";
	        somma += pq.top();
	        pq.pop();
	    }
	    
	    
	    
	    //cout << endl << "----" << endl;
	    return (int)floor(somma);
	}
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin>>N>>K;
        vector<int> a(N);
        for(int i = 0;i<N;i++)
            cin>>a[i];
        Solution ob;
        cout << ob.minSum(a,N,K) << endl;
    }
    return 0; 
}
// } Driver Code Ends