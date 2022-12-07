//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here
	    int n = s.length();
	    int mappa[26] =  {0};
        for (int i=0; i<n; i++)
        {
            mappa[s[i] - 'a']++;
        }
        
        unordered_map<int,int> freq;
        for(int i=0; i<26; i++)
        {
            if(mappa[i] > 0)
            {
                freq[mappa[i]]++;
                if (freq.size() > 2) return false;
            }
        }
    
        if (freq.size() == 1) return true;
        else
        {
            auto it = freq.begin();
            auto it2 = it++;
            
            int k = it->second;
            int l = it2->second;
            
            if (l == 1 && ((it2->first-it->first == 1) || it2->first == 1)) return true;
            else if       (k==1 && ((it->first) - (it2->first) == 1 || it->first == 1)) return true;
            else          return false;
        }   
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends