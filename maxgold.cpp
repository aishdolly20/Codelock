

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int optimal_weight(int W, int w[],int n);
int main()
{
    int W,n,i,maxweight=0;
    cin>>W>>n;
    int goldw[n];
    for(i=0;i<n;i++)
    cin>>goldw[i];
    cout<<optimal_weight(W,goldw,n);
    return 0;
}
int optimal_weight(int W, int w[],int n) {
  int weights[n+1][W+1];
  

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= W; j++) {      
        if (i==0 || j==0) 
          weights[i][j] = 0;
        else if (w[i - 1] <= j) 
          weights[i][j] = max(w[i - 1] + weights[i - 1][j - w[i - 1]],  weights[i - 1][j]);
        else
          weights[i][j] = weights[i - 1][j];
    }
  }

  return weights[n][W];
}
