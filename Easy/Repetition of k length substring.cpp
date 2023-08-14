//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Returns true if str can be coverted to a string
// with k repeated substrings after replacing k
// characters.
bool checkString(string str, int k);

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		string s;
		cin>>s;
		int k;
		cin>>k;
      cout<<checkString(s, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends


/*You are required to complete below method */
bool checkString(string str, int k)
{
    //Your code here
    vector<string> mappa;
    string tmp = "";
    
    if (str.length() % k != 0)
    {
        return false;
    }
    
    int cnt = 0;
    for (auto it : str)
    {
        tmp += it;
        if (cnt >= k-1)
        {
            mappa.push_back(tmp);
            cnt = 0;
            tmp = "";
        }
        else cnt += 1;
    }
    
    if (tmp != "")
    {
        mappa.push_back(tmp);
    }
    
    //for (auto it : mappa) cout << it << " ";
    //cout << endl;
     
 
    bool jolly = false;
    for (int i=0; i < mappa.size() - 1; i++)
    {
        //cout << mappa[i] << " " << mappa[i+1] << endl;
        if (mappa[i] != mappa[i+1])
        {
            if (!jolly) jolly = true;
            else return false;
        }
    }
    
    return true;

    
}