//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution 
{
  public:
    vector<int> getDistinctDifference(int N, vector<int> &A) 
    {
        // code here
        int dritti[N];
        int rovesciati[N];
        
        dritti[0] = 0;
        rovesciati[N-1] = 0;
        
        set<int> d;
        for (int i=0; i<N-1; i++)
        {
            d.insert(A[i]);
            dritti[i+1] = d.size();
        }
        
        set<int> r;
        for (int i=N-1; i>0; i--)
        {
            r.insert(A[i]);
            rovesciati[i-1] = r.size();
            
        }
        
        //for (int i=0; i<N; i++) cout << dritti[i] << " ";
        //cout << endl;
        //for (int i=0; i<N; i++) cout << rovesciati[i] << " ";
        //cout << endl;
        
        
        vector<int> ans;
        
        for (int i=0; i<N; i++)
        {
            ans.push_back(dritti[i] - rovesciati[i]);
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        vector<int> A(N);
        Array::input(A,N);
        
        Solution obj;
        vector<int> res = obj.getDistinctDifference(N, A);
        
        Array::print(res);
        
    }
}

// } Driver Code Ends