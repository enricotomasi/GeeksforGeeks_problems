//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int buyMaximumProducts(int n, int k, int price[])
    {
        //Write your code here
        vector<pair<int, int>> dic;
        
        for (int i=0; i<n; i++)
        {
            dic.push_back({price[i], i+1});
        }
        
        sort(dic.begin(), dic.end());
        
        int ans = 0;
        
        for (auto it : dic)
        {
            // cout << it.first << " " << it.second << endl;
            int price = it.first;
            int qta = it.second;
            
            int maxbuy = ceil(k / price);
            
            // cout << "price: " << price << " qta: " << qta << " maxbuy: " << maxbuy << endl;
            
            if (price > k) break;
            
            if (maxbuy > qta)
            {
                ans += qta;
                k -= price * qta;
                // cout << "buy: " << qta << " ans: " << ans << " k: " << k << endl;
            }
            else
            {
                ans += maxbuy;
                k -= price * maxbuy;
                // cout << "buy: " << maxbuy << " ans: " << ans << " k: " << k << endl;
            }
            
            
            // cout << endl;
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
	    int n, k;
	    cin >> n >> k;
	    int price[n];
	    for(int i = 0 ; i < n; i++){
	        cin >> price[i];
	    }
	    Solution ob;
	    int ans = ob.buyMaximumProducts(n, k, price);
	    cout << ans<<endl;
	}
	return 0;
}

// } Driver Code Ends