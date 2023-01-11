//{ Driver Code Starts
// C++ implementation to convert a
// sentence into its equivalent
// mobile numeric keypad sequence
#include <bits/stdc++.h>
using namespace std;
string printSequence(string input);
// Driver function
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
    {
        string s;
        getline(cin,s);
        cout<<printSequence(s)<<endl;
    }
	return 0;
}

// } Driver Code Ends


string printSequence(string S)
{
    //code here.
    string ans = "";
    
    for (char c : S)
    {
        if      (c == ' ') ans += "0";
        else if (c == 'A') ans += "2";
        else if (c == 'B') ans += "22";
        else if (c == 'C') ans += "222";
        else if (c == 'D') ans += "3";
        else if (c == 'E') ans += "33";
        else if (c == 'F') ans += "333";
        else if (c == 'G') ans += "4";
        else if (c == 'H') ans += "44";
        else if (c == 'I') ans += "444";
        else if (c == 'J') ans += "5";
        else if (c == 'K') ans += "55";
        else if (c == 'L') ans += "555";
        else if (c == 'M') ans += "6";
        else if (c == 'N') ans += "66";
        else if (c == 'O') ans += "666";
        else if (c == 'P') ans += "7";
        else if (c == 'Q') ans += "77";
        else if (c == 'R') ans += "777";
        else if (c == 'S') ans += "7777";
        else if (c == 'T') ans += "8";
        else if (c == 'U') ans += "88";
        else if (c == 'V') ans += "888";
        else if (c == 'W') ans += "9";
        else if (c == 'X') ans += "99";
        else if (c == 'Y') ans += "999";
        else if (c == 'Z') ans += "9999";
    }
    
    return ans;
}