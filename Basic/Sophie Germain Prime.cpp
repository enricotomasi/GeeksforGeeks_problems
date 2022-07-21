//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
	public:
	
	bool primo (int num)
	{
	    if ((num<2) || (num >2 && num%2 == 0)) return false;
	    
	    for (int i=2; i<(int)sqrt(num)+1; i++)
	    {
	        if (num%i == 0) return false;
	    }

	    return true;
	}
	
   	vector<int> sophie_Primes(int n)
   	{
   	    // Code here
   	    
   	    vector<int> ans;
   	    
   	    for (int i=0; i<n; i++)
   	    {
            if (primo(i) && primo((2*i)+1)) ans.push_back(i);	            
   	    }
   	    
   	    //if (ans.size() <=0 ) ans.push_back(-1); 
   	    
   	    return ans;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		vector<int> ans = ob.sophie_Primes(n);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends