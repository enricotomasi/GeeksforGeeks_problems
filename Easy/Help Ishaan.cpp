//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		bool primo (int n)
		{
		    if (n==1) return false;
		    
		    for (int i=2; i*i <=n; i++)
		    {
		        if (n%i == 0) return false;
		    }
		    
		    return true;
		}

		int NthTerm(int N)
		{
		    // Code here
		    if (primo(N)) return 0;
		    
		    int sopra = N;
		    int sotto = N;
		    
		    while (sotto)
		    {
		        if (primo(sotto)) break;
		    	sotto--;
		    }
		    
		    while (sopra)
		    {
		        if (primo(sopra)) break;
		        sopra++;
		    }

            int sop = sopra-N;
            int sot = N-sotto;

            // cout << sotto << " " << sopra << endl;
		    return min(sot, sop);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		int ans = obj.NthTerm(N);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends