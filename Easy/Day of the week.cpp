//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    bool bisestile(int anno)
    {
        return !(anno % 4 == 0 && anno %100 == 0 && anno %400 == 0);
    }
    
    string getDayOfWeek(int d, int m, int y)
    {
        // code here
        vector<string> giorni;
        giorni.push_back("Saturday");
        giorni.push_back("Sunday");
        giorni.push_back("Monday");
        giorni.push_back("Tuesday");
        giorni.push_back("Wednesday");
        giorni.push_back("Thursday");
        giorni.push_back("Friday");
    
        if (m<3)
        {
            m += 12;
            y -= 1;
        }
        
        int a = y % 100;
        int b = y / 100;
        
        int giorno = ((d+(((m+1)*26)/10)+a+(a/4)+(b/4))+(5*b))%7;
        
        return giorni[giorno];
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int d,m,y;
        
        cin>>d>>m>>y;

        Solution ob;
        cout << ob.getDayOfWeek(d,m,y) << endl;
    }
    return 0;
}
// } Driver Code Ends