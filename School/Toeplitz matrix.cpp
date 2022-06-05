 
// { Driver Code Starts
#include <iostream>
using namespace std;
#define MAX 1000 

bool isToepliz(int A[MAX][MAX],int N,int M);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[MAX][MAX];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		}

		cout<<isToepliz(a,n,m)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this method*/
bool isToepliz(int A[MAX][MAX],int N,int M){
    //Your code here
    
    for (int aumento = 0; aumento < M; aumento++) {
        int cifra = 0;
        for (int ciclo=0; ciclo <N; ciclo++){
            if (ciclo+aumento >= M) break;
            int numero = A[ciclo][ciclo+aumento];
            
            if (cifra == 0) {
                cifra= numero;
            } else {
                if (cifra != numero) return false;
            }
        }
    }
    return true;
    
    
    
}