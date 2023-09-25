//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
	public:
	bool isPrime(int n)
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0) return false;
        }
        
        return true;
    }


    void RestTwo (int x, int&a, int &b)
    {
        for (int i=2; i<=x/2; i++)
        {
            if (isPrime(i) && isPrime(x-i))
            {
                a = i;
                b = x - i;
                return;
            }
        }
    }
	
	vector<int> Express(int N)
	{
	    // Code here
	    vector<int> ans;
        
        if (N < 8)
        {
            ans.push_back(-1);
            return ans;
        }
       
        int a = 0;
        int b = 0;
        
        if (N % 2 != 0)
        {
            ans.push_back(2);
            ans.push_back(3);
            
            RestTwo(N - 5, a, b);
            
            ans.push_back(a);
            ans.push_back(b);
        }
        else
        {
            ans.push_back(2);
            ans.push_back(2);
            
            RestTwo(N - 4, a, b);
            
            ans.push_back(a);
            ans.push_back(b);
        }
        
        sort(ans.begin(), ans.end());
        
        return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.Express(N);
		for(auto i: ans)
			cout << i <<" ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends