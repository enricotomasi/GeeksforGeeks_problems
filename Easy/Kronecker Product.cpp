{ Driver Code Starts
 Initial Template for C++

#include bitsstdc++.h
using namespace std;

 } Driver Code Ends
 User function Template for C++

class Solution
{
public
    vectorvectorint kroneckerProduct(int n, int m, int p, int q,
                        vectorvectorint A, vectorvectorint B)
    {
         code here
        vectorvectorint ans(n  p, vectorint(m  q, 0));
        
        for (int i = 0; i  n; i++)
        {
            for (int j = 0; j  m; j++)
            {
                int t = 0;
                int agg = 0;
                
                for (int x = 0; x  p; x++)
                {
                    vectorint v;
                    
                    for(int y = 0; y  q; y++)
                    {
                        t = A[i][j]  B[x][y];
                        v.push_back(t);
                    }
                    
                    for (int l = 0; l  v.size(); l++)
                    {
                        ans[agg + i  p][l + j  q] = v[l];
                    }
                    
                    agg++;
                }
                
            }
        }
        
        return ans;
        
        
    }
};

{ Driver Code Starts.

int main(){
    int t;
    cint;
    while(t--){
        int n, m, p, q;
        cinnmpq;
        vectorvectorint A(n, vectorint(m, 0)), B(p, vectorint(q, 0));
        for(int i = 0;i  n;i++)
            for(int j = 0;j  m;j++)
                cinA[i][j];
        for(int i = 0;i  p;i++)
            for(int j = 0;j  q;j++)
                cinB[i][j];
        
        Solution ob;
        vectorvectorint ans = ob.kroneckerProduct(n, m, p, q, A, B);
        for(int i = 0;i  ans.size();i++){
            for(int j ans[i])
                coutj ;
            coutn;
        }
    }
    return 0;
}
 } Driver Code Ends