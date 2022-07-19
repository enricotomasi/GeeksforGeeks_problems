//{ Driver Code Starts
#include <iostream>
using namespace std;
int calcDiff(string str);
 
int main()
{
    int t;
    cin>>t;
    string x;
    getline(cin,x);
    while(t--)
    {
        string str;
        getline(cin,str);
         cout << calcDiff(str) << "\n";
    }
  
    return 0;
}
// } Driver Code Ends

#include<vector>
int calcDiff(string str)
{
    //code here
    
    vector<string> stringhe;
    
    string temp = "";
    for (int i=0; i<str.length(); i++)
    {
        if (str.at(i) != ' ') temp+=str.at(i);
        else
        {
            stringhe.push_back(temp);
            temp = "";
        }
    }
    
    if (temp != "") stringhe.push_back(temp);
    
    int facili = 0;
    int difficili = 0;
    
    for (string s : stringhe)
    {
        int vocali = 0;
        int consonanti = 0;
        int consCons = 0;
        int consConsTemp = 0;
        int consonante = false;
        
        for (char c : s)
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')       
            {
                vocali++;
                
                if (consonante)
                {
                    consCons = max(consCons, consConsTemp);
                    consConsTemp = 0;
                    
                }
                consonante = false;
                
            }
            else
            {
                consonanti++;
                consConsTemp++;
                consonante = true;
            }
        }
        
        if (consCons >=4 || (consonanti > vocali)) difficili++;
        else facili++;
        
    }
    
    return (facili*3) + (difficili*5);
    
    
}