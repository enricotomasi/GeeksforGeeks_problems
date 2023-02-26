//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int removeConsecutiveSame(vector<string> v) 
    {
        // Your code goes here
        vector<string> temp;
        int eliminati = 0;
        
        do
        {
            temp.clear();
            eliminati = 0;
            int n = v.size();
            int i=0;
            
            for (i=0; i<n-1; i++)
            {
                if (v[i] == v[i+1])
                {
                    eliminati++;
                    i++;
                }
                else
                {
                    temp.push_back(v[i]);
                }
            }
            
            if (i<n) temp.push_back(v[n-1]);
            
            //for (auto it : temp) cout << it << " ";
            //cout << endl;
            
            v = temp;
        }
        while (eliminati > 0);
        
        return temp.size();
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
         string s;
         vector<string> v;
         for(int i=0;i<n;i++)
         {
             cin>>s;
             v.push_back(s);
         }
         Solution ob;
         cout<< ob.removeConsecutiveSame(v) <<endl;
     }
	
	
	
	
	return 0;
}
// } Driver Code Ends