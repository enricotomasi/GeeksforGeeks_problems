//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	bool perfectSquare(long long n)
	{
	    long long s = sqrt(n);
	    return s*s == n;
	}
	
	bool static comp(const vector<long long> &a , const vector<long long> &b)
	{
	    return (long double)a[1] / a[0] > (long double)b[1] / b[0];
	}
	
	long double maximumProfit(int N, long long C, vector<long long> w, vector<long long> p)
	{
	    // Code here.
	    vector<vector<long long>> blocks;
	   
	    for (int i=0; i<N ;i++)
	    {
	        blocks.push_back({w[i], p[i]});
	    }
	    
	    sort(blocks.begin(), blocks.end(), comp);
	    
	    long double ans = 0.000;
	    for (int i=0; i<N; i++)
	    {
	        long double weight = blocks[i][0];
	        long double profit = blocks[i][1];
	        
	        if (perfectSquare(weight)) continue;
	        
	        if (weight < C)
	        {
	            C -= weight;
	            ans += (long double)profit;
	        }
	        else
	        {
	            ans += ((long double)profit * C / (long double)weight); 
	            break;
	        }
	    }
	    
	    return ans;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends