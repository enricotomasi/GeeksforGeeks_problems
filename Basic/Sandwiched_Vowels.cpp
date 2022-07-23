//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    
    public:

    string Sandwiched_Vowel(string s)
    {
        // Your code goes here
        
        string ans = "";
        
        char last = 'e';
        
        for (int i=0; i<s.length(); i++)
        {
            char now = s.at(i);
            char next = 'e';
            if (i<s.length()-1) next = s.at(i+1);
        
            //cout << last << " " << now << " " << next << endl;
        
            if ( (last != 'a' && last != 'e' && last != 'i' && last != 'o' && last != 'u')
              && (next != 'a' && next != 'e' && next != 'i' && next != 'o' && next != 'u')
              && (now == 'a' || now == 'e' || now == 'i' || now == 'o' || now == 'u') )
            {
                last = now;
                //cout << "bingo!" << endl << endl;
            }
            else
            {
                ans += now;
                last = now;
            }

        }
        
        return ans;
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.Sandwiched_Vowel(s);
        cout<<ans<< endl;
    }

	return 0;
}
// } Driver Code Ends