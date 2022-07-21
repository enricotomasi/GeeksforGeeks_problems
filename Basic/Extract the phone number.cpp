//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{

	public:
	string phoneNumber(string s)
	{
        // Your code goes here
        string ans = "";
        
        string format = "+dd-dddddddddd";
        
        int i = 0;
        bool iniziato = false;
        for (char c: s)
        {
            if (i>=format.length()) break;
            
            if (iniziato)
            {
                if (format.at(i) == 'd')
                {
                    if ((int)c >= 48 && (int)c <= 57)
                    {
                        i++;
                        ans +=c;
                    }
                    else
                    {
                        iniziato = false;
                        i=0;
                        ans = "";
                    }
                }
                
                else
                {
                    if (c == format.at(i))
                    {
                        i++;
                        ans +=c;
                    }
                    else
                    {
                        iniziato = false;
                        i=0;
                        ans = "";
                    }
                }
            }
            
            else
            {
                if (c == format.at(0))
                {
                    iniziato = true;
                    i++;
                    ans +=c;
                }
            }
        }
        
        return ans;
        
    }

};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin.ignore();//always use cin.ignore before getline.
        getline(cin,S);
        Solution ob;
        cout << ob.phoneNumber(S) << endl;
    }
    return 0; 
} 

// } Driver Code Ends