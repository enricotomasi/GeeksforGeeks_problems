//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    
    int max_path_sum(int A[], int B[], int l1, int l2)
    {
        //Your code here
        int ans = 0;
        
        int somma1 = 0;
        int somma2 = 0;
        
        int i = 0;
        int j = 0;
        
        while (i < l1 && j < l2)
        {
            if (A[i] == B[j])
            {
                ans += max(somma1, somma2);
                ans += A[i];
                i++;
                j++;
                somma1 = 0;
                somma2 = 0;
            }
            else if (A[i] < B[j]) somma1 += A[i++];
            else                  somma2 += B[j++];
        }

        while(i < l1) somma1 += A[i++];
        while(j < l2) somma2 += B[j++];

        ans += max(somma1, somma2);

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N,M;
        cin>>N>>M;
        fflush(stdin);
        int a[N],b[M];
        for(int i=0;i<N;i++)
            cin>>a[i];
        for(int i=0;i<M;i++)
            cin>>b[i];
        Solution obj;
        int result = obj.max_path_sum(a,b,N,M);
        cout<<result<<endl;
    }
}


// } Driver Code Ends