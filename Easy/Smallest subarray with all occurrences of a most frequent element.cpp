//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:

    vector<int> smallestSubsegment(int a[], int n)
    {
    	// Complete the function
    	unordered_map<int,int> mappa;
        for (int i=0; i<n; i++) mappa[a[i]]++;
       
        int k = INT_MIN;
        vector<int> temp;
        
        for (auto it : mappa)
        {
           if (it.second >= k) k = it.second;
        }
       
        for (auto it : mappa )
        {
           if (it.second == k) temp.push_back(it.first);
        }
        
        stack<pair<int,int>> pila;
        
        for (int i=0; i<temp.size(); i++)
        {
           int primo = 0;
           int ultimo = 0;
           
           for (int j=0; j<n; j++)
           {
               if(a[j] == temp[i])
               {
                   primo = j;
                   break;
               }
           }
           
           for (int j=n-1; j>=0; j--)
           {
               if (a[j] == temp[i])
               {
                   ultimo = j;
                   break;
               }
           }
           
           int diff = abs(primo - ultimo);
           
           if (!pila.empty() && diff < abs(pila.top().second - pila.top().first))
           {
               pila.pop();
               pila.push({primo, ultimo});
           }
           else
           {
               if (!pila.empty() && diff > abs(pila.top().second - pila.top().first)) continue;
               pila.push({primo, ultimo});
           }
       }
       
       pair<int,int> coppie;
       
       int z = n;
       
       while (!pila.empty())
       {
           if(pila.top().first < z)
           {
               coppie.first = pila.top().first;
               coppie.second = pila.top().second;
               z = pila.top().first;
           }
           pila.pop();
       }
       
       vector<int> ans;
       
       for (int i=coppie.first; i<=coppie.second; i++) ans.push_back(a[i]);
       
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
	    int n,i;
	    cin>>n; int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    vector<int > v;
	    Solution ob;
	    v = ob.smallestSubsegment(a, n);
	    for(int i:v)
	        cout<< i << " ";
	    cout<<"\n";
	}
return 0;
}

// } Driver Code Ends