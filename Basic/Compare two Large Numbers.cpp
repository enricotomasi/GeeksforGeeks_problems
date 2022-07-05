// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int check(string a,string b);
int main(){
    int t;
    cin>>t;
    while(t--)
    {
       string a, b;
    cin >> a >> b;
    cout<<check(a,b)<<'\n';


    }

    return 0;
}
// } Driver Code Ends


string ripulisci(string a)
{
    string aB = "";
    bool iniziato = false;
    for (int i=0; i<a.length(); i++)
    {
        
        if (iniziato)
        {
            aB += a[i];
        }
        else
        {
            if (a[i] != '0')
            {
                iniziato = true;
                aB += a[i];
            }
        }
        
    }
    return aB;
    
}

int check(string a,string b)
{
    //code
    
    if (a==b) return 3;
    
    string aB = ripulisci(a);
    string bB = ripulisci(b);

    if (aB == bB) return 3;
    
    if (aB.length() > bB.length()) return 2;
    
    if (bB.length() > aB.length()) return 1;

    for (int i=0; i< aB.length(); i++)
    {
        int cA = stoi(to_string(aB.at(i)));
        int cB = stoi(to_string(bB.at(i)));
        
        if (cA > cB) return 2;
        if (cB > cA) return 1;
    }
    
    return -1;
}


