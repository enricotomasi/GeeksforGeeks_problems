//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
/*You are required to complete this method */

class Solution
{
    public:
    void ric(vector<int>&vett, int k, int indice, int&ans)
    {
        if(vett.size()==1)
        {
            ans=vett[0];
            return;
        }

        indice = (indice+k) % vett.size();
        vett.erase(vett.begin() + indice);
        ric(vett, k, indice, ans);
    }

    int josephus(int n, int k)

    {
       //Your code here
       int indice = 0;
       int ans= - 1;
       vector<int> vett;
       
       for(int i=1; i<=n; i++) vett.push_back(i);

       k--;
       ric(vett, k, indice, ans);
       return ans;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n,k;
		cin>>n>>k;//taking input n and k
		
		//calling josephus() function
		Solution ob;
		cout<<ob.josephus(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends