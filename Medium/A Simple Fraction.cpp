//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	string fractionToDecimal(int numerator, int denominator)
	{
	    // Code here
        string ans = to_string(numerator/denominator);
      
        int remainder = numerator % denominator;
        
        if (remainder == 0)
        {
            return ans;
        }
      
        ans.push_back('.');
      
        unordered_map<int, int> m;
        
        while (remainder)
        {
            if (m.find(remainder) != m.end())
            {
                ans.insert(m[remainder], "(");
                ans.push_back(')');
                
                break;
            }
            else
            {
                m[remainder] = ans.size();

                ans += to_string((remainder * 10) / denominator);
                
                remainder = (remainder * 10) % denominator;
            }
        }
      
        return ans;
	    
	}
	
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int numerator, denominator;
		cin >> numerator >> denominator;
		Solution ob;
		string ans = ob.fractionToDecimal(numerator, denominator);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
