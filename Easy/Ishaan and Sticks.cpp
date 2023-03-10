//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<int> square(int arr[], int n);


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int> ans;
        ans = square(arr, n);
        for(int i:ans)
            cout << i << " ";
        cout << endl;
        
    }
    return 0;
}

// } Driver Code Ends


vector<int> square(int arr[], int n)
{
    // Complete the function
    map<int, int> mappa;
    
    for (int i=0; i<n; i++)
    {
        mappa[arr[i]]++;
    }
    
    // for (auto it : mappa) cout << it.first << " " << it.second << endl;

    int quadrati = 0;
    int area = 0;
 
    for (auto it : mappa)
    {
        int q = floor(it.second /4);
        int l = it.first;
        
        int areaTemp = (l * l);
        
        //cout << q << " " << l << " " << areaTemp << endl;
        
        if (areaTemp > area && q > 0)
        {
            area = areaTemp;
            quadrati = q;
        }
    }

    //cout << area << " " << quadrati << endl;

    if (quadrati > 0) return {area, quadrati};
    
    return {-1};
    
}
