#include <iostream>
using namespace std;
int main()
{ int i,j,k,n,q,L,c[100];
  static int m[100][100],mod[100][100];
  cin>>n;
  for(i=1;i<=n;i++)
  cin>>c[i];
  for(i=1;i<=n;i++)
  mod[i][i]=c[i];
  for (L = 2; L <= n; L++) { 
        for (i = 1; i <=n - L + 1; i++) { 
            j = i + L - 1; 
            m[i][j] = 32767;
            for (k = i; k <= j - 1; k++) { 
               q = m[i][k] + m[k + 1][j] + (mod[i][k]*mod[k+1][j]); 
                if (q < m[i][j]){ 
                    m[i][j] = q; 
                    mod[i][j]=(mod[i][k]+mod[k+1][j])%100;
                }
            } 
        } 
    } 
  cout<<m[1][n];
  return 0;
}

