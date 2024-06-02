//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int maxEqualSum(int N1, int N2, int N3, vector<int> &S1, vector<int> &S2, vector<int> &S3)
    {
        int t1 = 0;
        for (auto it : S1) t1 += it;
        
        int t2 = 0;
        for (auto it : S2) t2 += it;
        
        int t3 = 0;
        for (auto it : S3) t3 += it;
        
        //cout << t1 << " " << t2 << " " << t3 << endl; //debug
        
        vector<int> s1;
        s1.push_back(t1);
        
        for (auto it : S1)
        {
            t1 -= it;
            s1.push_back(t1);
        }
        
        //cout << "s1: "; //debug
        //for (auto it : s1) cout << it << " "; //debug
        //cout << endl; //debug
    
        vector<int> s2;
        s2.push_back(t2);
        
        for (auto it : S2)
        {
            t2 -= it;
            s2.push_back(t2);
        }
        
        //cout << "s2: "; //debug
        //for (auto it : s2) cout << it << " "; //debug
        //cout << endl; //debug
        
        vector<int> s3;
        s3.push_back(t3);
        
        for (auto it : S3)
        {
            t3 -= it;
            s3.push_back(t3);
        }
        
        //cout << "s3: "; //debug
        //for (auto it : s3) cout << it << " "; //debug
        //cout << endl; //debug
        
        int j = 0;
        int k = 0;
        
        for (int i = 0; i < s1.size(); i++)
        {
            int el = s1[i];
            
            //cout << endl << "el: " << el << endl; // debug
         
            while (s2[j] > el)
            {
                j++;
            }
            
            if (s2[j] != el)
            {
                continue;
            }
            
            while (s3[k] > el)
            {
                k++;
            }
            
            if (s3[k] == el)
            {
                return el;
            }
            
        }
        
        return -1;
    }
};


//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3;
        cin>>n1>>n2>>n3;
        vector<int> s1(n1),s2(n2),s3(n3);
        for(int i=0;i<n1;i++){
            cin>>s1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>s2[i];
        }
        for(int i=0;i<n3;i++){
            cin>>s3[i];
        }
        Solution ob;
        int ans=ob.maxEqualSum(n1,n2,n3,s1,s2,s3);
        cout<<ans<<endl;
    }
    
    return 0;
}
// } Driver Code Ends