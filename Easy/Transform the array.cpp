//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	
	public:

	vector<int> valid(int arr[],int n)
	{
	    // Your code goes here
	    vector<int> temp;
        int valide = 0;
        for (int i=0; i<n; i++) 
        {
            if(arr[i] > 0) 
            {
                temp.push_back(arr[i]);
                valide += 1;
            }
        }
       
        for (int i=0; i<valide-1; i++) 
        {
            int j = i;
            while (temp[i] == temp[j+1] && j < valide-1) 
            {
                temp[i] = 2 * temp[i];
                temp[j+1] = 0;
                j++;
            }
            i = j;
       }
       
       vector<int> ans;
       for (int i=0; i<valide; i++) 
       {
            if (temp[i] > 0) 
            {
                ans.push_back(temp[i]);
            }
       }
       
        int zeri = n - ans.size();
       
        for (int i=0; i<n; i++)
        {
            ans.push_back(0);
        }
       
       return ans;
	}
};
	  

//{ Driver Code Starts.

int main() 
{
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        int arr[n],i,j=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.valid(arr,n);
        for(i=0;i<n;i++)
        	cout<<ans[i]<<" ";
	    cout << "\n";
    }
    return 0;
}






// } Driver Code Ends