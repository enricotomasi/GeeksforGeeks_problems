//{ Driver Code Starts
// C++ program to print sum triangle for a given array
#include <bits/stdc++.h>
using namespace std;

vector<long long> getTriangle(int arr[], int n);

// Driver Program
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        
        vector<long long> Triangle = getTriangle(a, n);
        
        for(auto it: Triangle)
            cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> getTriangle(int arr[], int n)
{
    vector<long long> temp;
    vector<vector<long long>> cont;
    
    for (int i=0; i<n; i++)
    {
        temp.push_back(arr[i]);
    }
    
    cont.push_back(temp);
    
    while (temp.size()>1)
    {
        vector<long long> temp2;
        
        long long last = temp[0];
        
        for (int i=1; i<temp.size(); i++)
        {
            temp2.push_back(last+temp[i]);
            last = temp[i];
        }
        
        cont.push_back(temp2);
        temp = temp2;
    }
    
    
    vector<long long> ans;
    
    for (int i=cont.size()-1; i>=0; i--)
    {
        vector<long long> a = cont[i];
        for (int i=0; i<a.size(); i++)
        {
            ans.push_back(a[i]);
        }
    }
    
    return ans;
    
    
}