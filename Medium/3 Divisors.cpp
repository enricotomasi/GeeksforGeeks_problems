//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    /*
        
        The logic behind this is, such numbers can have only three numbers as their divisor
        and also that includes 1 and that number itself resulting into just a single divisor
        other than number, so we can easily conclude that required are those numbers which 
        are squares of prime numbers so that they can have only three divisors (1, the number itself and sqrt(number)).
        
        So all primes i, such that i*i is less than equal to N are three-prime numbers.
        
        Note: We can generate all primes within a set using any sieve method efficiently and then we should all primes i,
        such that i*i <=N.
    
    */
    
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
        vector<int> ans;
        
        for (auto it : query)
        {
            vector<bool> sieve(it + 1, true);
            
            int sq = (int)sqrt(it);
            
            //cout << it << " " << " sq: " << sq << endl;
            
            for (int i = 2; i < sq; i++)
            {
                if (sieve[i])
                {
                    for (int j = i * i; j <= sq; j += i)
                    {
                        sieve[j] = false;
                    }
                }
            }
            
            int count = 0;
            
            for (int i = 2; i <= sq; i++)
            {
                if (sieve[i])
                {
                    count++;
                    //cout << i << " ";
                }
            }
            
            ans.push_back(count);
            
        }
        
        //cout << endl;
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends