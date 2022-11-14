//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
public:
    string chooseandswap(string a)
    {
        // Code Here
        vector<int> mappa(26);
        
        for (int i=0; i<a.size(); i++) mappa[a[i]-'a'] = 1;
        
        int cur = 0;
        while (cur < 26 && mappa[cur] != 1) cur++;
        
        bool ok = false;
        int j = 0;
        char t1;
        char t2;
        
        while (j < a.size())
        {
            if(cur >= a[j] - 'a')
            {
                while (j < a.size() && cur >= a[j] - 'a') j++;
                cur++;
                while (cur < 26 && mappa[cur] != 1) cur++;
            }
            else
            {
                ok = true;
                t1 = cur + 'a';
                t2 = a[j];
                break;
            }
        }
        
        if (ok)
        {
            for (int i=0; i < a.size(); i++)
            {
                if      (a[i] == t1) a[i] = t2;
                else if (a[i] == t2) a[i] = t1;
            }
        }
        return a;

    }
    
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
	int t;
	cin >> t;
	while(t--)
	{	
	    string a;
		cin >> a;
		cout << obj.chooseandswap(a) << endl;
	}
	return 0;
}

// } Driver Code Ends