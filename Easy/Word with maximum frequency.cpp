//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <sstream>
using namespace std;



string maximumFrequency(string s);

int main()
{
    int t;cin>>t;
    cin.ignore();

    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        
        cout << maximumFrequency(s) << endl;

    }
    return 0;
}

// } Driver Code Ends

string maximumFrequency(string s)
{
    // Complete the function
    int n = s.length();
    
    string temp = "";
    int conta = 0;
    
    map<string, int> mappa;
    map<string, int> pos;
    
    for (int i=0; i<n; i++)
    {
        char c = s[i];

        if (c == ' ')
        {
            conta++;
            if (mappa[temp] <= 0)
            {
                pos[temp] = conta;
            }
            mappa[temp]++;
            temp = "";
        }
        else
        {
             temp += c;
        }
    }
    
    pos[temp] = conta+1;
    mappa[temp]++;

    int m = -1;
    int p = 2147483646;
    string ans = "";
    
    for (auto it : mappa)
    {
        // cout << it.first << " " << it.second << endl;
        if (it.second > m || (it.second >= m && pos[it.first] < p))
        {
            m = it.second;
            ans = it.first + " " + to_string(it.second);
            p = pos[it.first];
        }
    }
    
    return ans;
}

