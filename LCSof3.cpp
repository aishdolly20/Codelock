#include<bits/stdc++.h> 
using namespace std; 
 int lcsOf3( long X[], long Y[], long Z[], int m, 
                               int n, int o) ; 

int lcsOf3( long X[], long Y[], long Z[], int m, 
                               int n, int o) 
{ 
    int L[m+1][n+1][o+1]; 
  
    /* Following steps build L[m+1][n+1][o+1] in 
       bottom up fashion. Note that L[i][j][k] 
       contains length of LCS of X[0..i-1] and 
       Y[0..j-1]  and Z[0.....k-1]*/
    for (int i=0; i<=m; i++) 
    { 
        for (int j=0; j<=n; j++) 
        { 
            for (int k=0; k<=o; k++) 
            { 
                if (i == 0 || j == 0||k==0) 
                    L[i][j][k] = 0; 
  
                else if (X[i-1] == Y[j-1] && X[i-1]==Z[k-1]) 
                    L[i][j][k] = L[i-1][j-1][k-1] + 1; 
  
                else
                    L[i][j][k] = max(max(L[i-1][j][k], 
                                         L[i][j-1][k]), 
                                     L[i][j][k-1]); 
            } 
        } 
    } 
  

    return L[m][n][o]; 
} 
  

int main() 
{ 
    int m,n,o;
    cin>>m;
    long X[m];
    for(int i=0;i<m;i++)
    cin>>X[i];
    cin>>n;
    long Y[n];
    for(int i=0;i<n;i++)
    cin>>Y[i];
    cin>>o;
    long Z[o];
    for(int i=0;i<o;i++)
    cin>>Z[i];
    cout <<lcsOf3(X, Y, Z, m, n, o); 
    return 0; 
} 