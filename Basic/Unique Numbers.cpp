 
// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> uniqueNumbers(int L,int R)
    {
        // Write Your Code here
        
        vector<int> ans;
        
        for (int i=L; i<=R; i++)
        {
            string s = to_string(i);
            
            int mappa[256] = { };
            
            for (int j=0; j<s.length(); j++)
            {
                mappa[(int)s[j]]++;
            }
            
            bool vabene = true;
            for (int k=0; k<255; k++)
            {
                if (mappa[k] > 1)
                {
                    vabene = false;
                    break;
                }
            }
            
            if (vabene) ans.push_back(i);
            
            
        }
        
        
        
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r ;
        cin >> l >> r;
		Solution ob;
		vector<int> numbers = ob.uniqueNumbers(l,r);
		
		for(int num : numbers){
		   cout<<num<<" ";
		}
		cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends