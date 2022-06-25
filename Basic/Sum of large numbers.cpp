// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
	public:
   	string add(string s1, string s2)
   	{
   	    // Code here
   	    string ans = "";
   	    int l1 = s1.length();
   	    int l2 = s2.length();
   	    int ml = max(l1,l2);
   	    
   	    string t = "";
        for (int i=0;  i<ml-l1; i++)
   	    {
   	        t+='0';
   	    }
   	    s1 = t + s1;    
   	    
   	    t = "";
   	    
   	    for (int i=0;  i<ml-l2; i++)
   	    {
   	        t+='0';
   	    }
   	    s2 = t + s2;    
   	    
   	    int resto = 0;
   	    for (int i=ml-1; i>=0; i--)
   	    {
   	        char dc1 = '0';
   	        char dc2 = '0';
            
            int d1 = 0;
            int d2 = 0;
            
            dc1 = s1.at(i);
            string temp = "";
            temp += dc1;
            d1 = stoi(temp);
           
            dc2 = s2.at(i);
            temp = "";
            temp += dc2;
            d2 = stoi(temp);
            
            int d3 = d2+d1+resto;
            resto = 0;
            if (d3 > 9)
            {
                int dt = abs(10-d3);
                ans += to_string(dt);
                resto++;
            }
            else ans += to_string(d3);

   	    }
   	    
   	    if (resto !=0) ans += to_string(resto); 
   	    
   	    reverse(ans.begin(), ans.end());
   	    
   	    return ans;
   	}    
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s1, s2;
		cin >> s1 >> s2;
		Solution ob;
		string ans = ob.add(s1, s2);
		cout << ans <<"\n";
	}  
	return 0;
}  // } Driver Code Ends