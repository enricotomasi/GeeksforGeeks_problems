//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

vector<string>  spaceString(char str[]);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[10000];
        cin>>str;
        vector<string> vec = spaceString(str);
        for(string s: vec){
            cout<<s<<"$";
        }
        cout<<endl;
    }

}

// } Driver Code Ends


/*You have to complete this function*/


void ric(vector<string> &ans, string &output, string input)
{
    if (input.length() == 0)
    {
        ans.push_back(output);
        return;
    }

    string temp1 = output + input[0];
    string temp2 = output + " " + input[0];
    
    input.erase(input.begin()+0);
    
    ric(ans, temp1, input);
    ric(ans, temp2, input);

    return;
}


vector<string> spaceString(char str[])
{
    //Your code here
    vector<string> ans;
    
    string input = str;
    string output = "";
    output += input[0];
    
    input.erase(input.begin()+0);
    ric(ans, output, input);
    
    return ans;
}