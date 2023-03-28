//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string isCircular(string path);

int main(){
    int t;
    cin >> t;
    while(t--){
        string path;
        cin >> path;
        cout << isCircular(path) << endl;
    }
return 0;
}
// } Driver Code Ends


string isCircular(string path)
{
    //complete the function here
    int n = path.length();
    int dir = 4;
    int a = 0;
    int b = 0;
    
    for (int i=0; i<n; i++)
    {
        if      (path[i] == 'L') dir++;
        else if (path[i] == 'R') dir--;
        else
        {
            int t = dir %4;
            if      (t == 0) a++;
            else if (t == 1) b--;
            else if (t == 2) a--;
            else if (t == 3) b++;
        }
    }
  
    if (a == 0 && b == 0) return "Circular";
    
    return "Not Circular";
    
}