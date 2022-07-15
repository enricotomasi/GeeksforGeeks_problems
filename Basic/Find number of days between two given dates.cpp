// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    bool bisestile(int anno)
    {
        if (anno % 400 == 0)
        {
            return true;
        }
        if (anno % 4 == 0 && anno % 100 != 0)
        {
            return true;
        }
        return false;
    }
    
    //bool debug = false;
    
    int noOfDays(int d1, int m1, int y1, int d2, int m2, int y2)
    {
        // code here
        if ( (y1 > y2) || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2) )
        {
            int td1 = d1;
            int tm1 = m1;
            int ty1 = y1;
            
            d1 = d2;
            m1 = m2;
            y1 = y2;
            
            d2 = td1;
            m2 = tm1;
            y2 = ty1;
            
            //if (debug) cout << "invertito" << endl;
        }
        
        //if (debug) cout << y1 << "-" << m1 << "-" << d1 << endl;
        //if (debug) cout << y2 << "-" << m2 << "-" << d2 << endl;

        int ans = 0;
        int mese[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        if (y1 == y2 && m1 == m2) // stesso anno stesso mese
        {
            //if (debug) cout << "Stesso anno stesso mese, d2-d1 : " << (d2-d1) << endl;
            return d2-d1;
        }
        
        if (y1 == y2) // stesso anno mese diverso
        {
            for (int i=m1; i<=m2-1; i++)
            {
                if (i == 2 && bisestile(y1))
                {
                    ans +=29;
                }
                else ans += mese[i];
            }
            
            if (d1 != d2) ans+=d2-d1;
            //if (debug) cout << "Stesso anno, mese diverso. Risultato: " << ans << endl;
            return ans;
        }
        
        // tutto diverso
        // arriviamo a fine anno
        //if (debug) cout << "tutto diverso!" << endl;
        
        ans += mese[m1]-d1;
        //if (debug) cout << "Aggiungoi giorni finoa fine mese (" << m1 << ") ovvero: " << ans << endl;;
        if (m1 == 2 && bisestile(y1))
        {
            ans++;
            //if (debug) cout << "Anno " << y1 << " bisestile, aggiungo uno: " << ans << endl;
        }
        
        for (int i=m1+1; i<=12; i++)
        {
            if (i == 2 && bisestile(y1)) ans += 29;
            else ans += mese[i];
        }
        
        // aggiungiamo gli anni
        for (int i= y1+1; i<y2; i++)
        {
            if (bisestile(i))
            {
                ans += 366;
            }
            else ans += 365;
        }
        
        // arriviamo alla data
        // aggiungiamo i mesi
        
        for (int i = 1; i<m2; i++)
        {
            if (i==2 && bisestile(y2)) ans += 29;
            else ans += mese[i];
        }
        
        // aggiungiamo i giorni
        ans += d2;
        
        //if (debug) cout << "Risultato: " << ans << endl << endl;
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int d1,d2,m1,m2,y1,y2;
        
        cin>>d1>>m1>>y1;
        cin>>d2>>m2>>y2;

        Solution ob;
        cout << ob.noOfDays(d1,m1,y1,d2,m2,y2) << endl;
    }
    return 0;
}  // } Driver Code Ends