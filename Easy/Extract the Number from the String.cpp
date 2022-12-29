//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    long long ExtractNumber(string S)
    {
        //code here
        int n = S.length();
        
        vector<long long> numeri;
        int i=0;
        string parola = "";
        
        while (i<n)
        {
            while (i<n && (S[i] < '0' && S[i] > '9')) i++;
            
            if (i<n)
            {
                parola = "";
                bool ok = true;
                while (i<n && (S[i] >= '0' && S[i] <= '9'))
                {
                    // cout << S[i] << " ";
                    if (S[i] == '9') ok  = false;
                    parola += S[i];
                    i++;
                } 
                // cout << "*" << parola << "*" << endl;
                if (ok && !parola.empty())
                {
                    stringstream ss(parola);
                    long long num = 0;
                    ss >> num;
                    numeri.push_back(num);
                }
                i++;
            }
            
        }
        
        if (numeri.size() <= 0) return -1;
        
        long long ans = INT_MIN;
        for (auto it : numeri) ans = max(ans,it);
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{
   
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.ExtractNumber(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends