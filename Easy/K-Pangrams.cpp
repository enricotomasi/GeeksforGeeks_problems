//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

bool kPangram(string str, int k);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        string str;
        getline(cin,str);
        int k;
        cin>>k;
        cout<<kPangram(str,k)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool kPangram(string str, int k)
{
    // code here
    int n = 0;
    long long int mappa[26] = {};
 
    for (char c : str)
    {
        if (c != ' ')
        {
            n++;
            mappa[c-'a']++;
        }
    }
    
    if (n<26)
    {
        //cout << "n<26" << endl;
        return 0;
    }
    
    int missing = 0;
    
    for (int i=0; i<26; i++)
    {
        //cout << mappa[i] << " " << (char)(i+'a') << endl;
        if (mappa[i] <= 0)
        {
            missing++;
        }
    }
  
    if (missing == 0)
    {
        //cout << "0 missing" << endl;
        return 1;
    }
  
    //cout << "missing   : " << missing << endl;
    //cout << "n         : " << n << endl;
    //cout << "k         : " << k << endl;

    return (k + (26-missing)) >= 26;
    
}