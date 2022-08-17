//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution
{
public:
    string compareFrac(string s)
    {
        // Code here
        int n = s.length();
        int passo = 0;

        string sn1 = "";
        string sd1 = "";
        string sn2 = "";
        string sd2 = "";
        
        
        for (int i=0; i<n; i++)
        {
            if (passo == 0) // num1
            {
                if (s.at(i) != '/') sn1 += s.at(i);
                else passo++;
            }
            else if (passo == 1) // den2
            {
               if (s.at(i) != ',') sd1 += s.at(i);
                else passo++;
            }
            else if (passo == 2) // num2
            {
                if (s.at(i) != '/') sn2 += s.at(i);
                else passo++;
            }
            else if (passo == 3) // den2
            {
                sd2 += s.at(i);
            }
        }
        
        int num1 = stoi(sn1);
        int den1 = stoi(sd1);
        int num2 = stoi(sn2);
        int den2 = stoi(sd2);
        
        string ans = "";

        if (((double)num1/(double)den1) > ((double)num2/(double)den2))
        {
            ans += to_string(num1);
            ans += "/";
            ans += to_string(den1);
        }
        else if (((double)num1/(double)den1) < ((double)num2/(double)den2))
        {
            ans += to_string(num2);
            ans += "/";
            ans += to_string(den2);
        }
        else
        {
            ans = "equal";
        }
        
        return ans;
        
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    Solution ob;
    int t;
    cin>>t;        
    cin.ignore();
    for(int i=0;i<t;i++)
    {

        string s;
        getline(cin,s);
        
        cout << ob.compareFrac(s) << endl;



    }
    return 0;
}

// } Driver Code Ends